#include "StdAfx.h"
#include "BeatModel.h"

BeatModel::BeatModel()
{
	soundLoader = NULL;
	soundPerformance = NULL;
	audioSound = NULL;

	soundFile = "Drum.sgt";
}

BeatModel::~BeatModel()
{
	off();

	soundPerformance->CloseDown();

	soundLoader->Release();
	soundPerformance->Release();
	audioSound->Release();

	CoUninitialize();
}

int BeatModel::initialize() 
{
	if (FAILED(CoInitialize(NULL))) 
		return 1;

	return buildTrackAndStart(setUpMidi());
}
 
void BeatModel::on() 
{
	if (soundPerformance->IsPlaying(audioSound, NULL) != S_OK) {
         soundPerformance->PlaySegmentEx(audioSound, NULL, NULL, 0, 0, NULL, NULL, NULL);
	}
	setBPM(90);
}
 
void BeatModel::off()
{
	setBPM(0);
	if(soundPerformance->IsPlaying(audioSound, NULL) == S_OK) {
		soundPerformance->StopEx(audioSound, 0, 0);
	}
}
 
void BeatModel::setBPM(int bpm)
{
	this->bpm = bpm;

	float tempo;
	if (bpm == 0) {
		tempo = 1.0f;
	} else {
		tempo = bpm/100.0f;
	}

	soundPerformance->SetGlobalParam(GUID_PerfMasterTempo, (void*)&tempo, sizeof(float));
	notifyBPMObservers();
}
  
int BeatModel::getBPM()
{
	return bpm;
}
  
bool BeatModel::getRun()
{
	return run;
}
  
void BeatModel::beatEvent()
{
	notifyBeatObservers();
}
   
void BeatModel::registerObserver(BeatObserver* o)
{
	beatObservers.push_back(o);
}
  
void BeatModel::notifyBeatObservers()
{
	list<class BeatObserver*>::iterator it;
	for(it=beatObservers.begin();it!=beatObservers.end();++it) {
		BeatObserver* observer = *it;
		observer->updateBeat();
	}
}
  
void BeatModel::registerObserver(BPMObserver* o)
{
	bpmObservers.push_back(o);
}
  
void BeatModel::notifyBPMObservers()
{
	list<class BPMObserver*>::iterator it;
	for(it=bpmObservers.begin();it!=bpmObservers.end();++it) {
		BPMObserver* observer = *it;
		observer->updateBPM();
	}
}

void BeatModel::removeObserver(BeatObserver* o)
{
	beatObservers.remove(o);
}

void BeatModel::removeObserver(BPMObserver* o)
{
	bpmObservers.remove(o);
}

int BeatModel::setUpMidi()
{
	char directory[MAX_PATH];
	WCHAR path[MAX_PATH];

	if(FAILED(CoCreateInstance(CLSID_DirectMusicLoader, NULL, CLSCTX_INPROC,
										IID_IDirectMusicLoader8, (void**)&soundLoader))) {    
		return 2;
	}

	if(FAILED(CoCreateInstance(CLSID_DirectMusicPerformance, NULL, CLSCTX_INPROC,
								IID_IDirectMusicPerformance8, (void**)&soundPerformance))) {
		return 3;
	}

	soundPerformance->InitAudio(NULL, NULL, NULL, 
								DMUS_APATH_SHARED_STEREOPLUSREVERB, 64, DMUS_AUDIOF_ALL, NULL);

	GetCurrentDirectory(MAX_PATH, directory);
	
	MultiByteToWideChar(CP_ACP, 0, directory, -1, path, MAX_PATH);

	soundLoader->SetSearchDirectory(GUID_DirectMusicAllTypes, path, FALSE);

	GUID guid = GUID_NOTIFICATION_MEASUREANDBEAT;	
	soundPerformance->AddNotificationType(guid);
	soundPerformance->SetNotificationHandle(musicMessageEvent, 0);

	run = true;
	musicMessageThread = chBEGINTHREADEX(NULL, 0, meta, this, 0, NULL);

	return 0;
} 

int BeatModel::buildTrackAndStart(int err)
{
	if ( err != 0)
		return err;

	WCHAR path[MAX_PATH];

	MultiByteToWideChar(CP_ACP, 0, soundFile.c_str(), -1, path, MAX_PATH);

	if(FAILED(soundLoader->LoadObjectFromFile(CLSID_DirectMusicSegment, 
							IID_IDirectMusicSegment8, path, (void**)&audioSound))) {
		return 4;
	}

	audioSound->Download(soundPerformance);

	audioSound->SetRepeats(DMUS_SEG_REPEAT_INFINITE);

	return 0;
}
 
HANDLE BeatModel::getMusicMessageEvent()
{
	return musicMessageEvent;
}

IDirectMusicPerformance8* BeatModel::getSoundPerformance()
{
	return soundPerformance;
}

string BeatModel::getError(int err)
{
	string ret;
	switch (err)
	{
		case 1:
			ret = "Failed to CoInitialize";
			break;
		case 2:
			ret = "Failed to create Direct Music Loader";
			break;
		case 3:
			ret = "Failed to create Direct Music Performance";
			break;
		case 4:
			ret = "Failed to Load Object From File";
			break;
		default:
			ret = "Unknown failer";	
	}

	return ret;
}
 
DWORD WINAPI meta(PVOID param)
{
	BeatModel* model = (BeatModel*)param;

	HANDLE musicMessageEvent = model->getMusicMessageEvent();
	IDirectMusicPerformance8* soundPerformance = model->getSoundPerformance();

	DWORD dwResult;
	DMUS_NOTIFICATION_PMSG* message;
 
	do
	{
		dwResult = WaitForSingleObject(musicMessageEvent, 100);

		while ((S_OK == soundPerformance->GetNotificationPMsg(&message)) && (model->getRun()))
		{
			model->beatEvent();
			soundPerformance->FreePMsg((DMUS_PMSG*)message); 
		}
	} while (model->getRun());

	return 0;
}
