#pragma once

#include "IFace.h"

DWORD WINAPI meta(PVOID param);

class BeatModel : public BeatModelInterface
{
public:
	BeatModel();
	~BeatModel();
	int initialize();
	void on();
    void off();
	void setBPM(int bpm);
	int getBPM();
	bool getRun();
	void beatEvent();
	void registerObserver(BeatObserver* o);
	void notifyBeatObservers();
	void registerObserver(BPMObserver* o);
	void notifyBPMObservers();
	void removeObserver(BeatObserver* o);
	void removeObserver(BPMObserver* o);
	HANDLE getMusicMessageEvent();
	IDirectMusicPerformance8* getSoundPerformance();
	string getError(int err);
private:
	void writeErrorToLog(PSTR pszMsg, PSTR pszHeader);
	int setUpMidi();
	int buildTrackAndStart(int err);
	int bpm;
	HANDLE musicMessageEvent;
	IDirectMusicLoader8* soundLoader;
	IDirectMusicPerformance8* soundPerformance;
	IDirectMusicSegment8* audioSound;
	IDirectMusicGraph8* graph;
	HANDLE musicMessageThread;
	string soundFile;
	list<class BeatObserver*> beatObservers;
	list<class BPMObserver*> bpmObservers;
	bool run;
};
