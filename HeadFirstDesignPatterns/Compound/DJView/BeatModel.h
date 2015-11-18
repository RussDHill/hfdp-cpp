#pragma once

#include "IFace.h"

UINT meta(LPVOID param);

class BeatModel : public BeatModelInterface  
{
public:
	BeatModel();
	virtual ~BeatModel();
	void initialize();
	void quit();
	void on();
    void off();
	void setBPM(int bpm);
	bool getRun() const;
	int getBPM() const;
	void beatEvent();
	void registerObserver(BeatObserver* o);
	void notifyBeatObservers();
	void registerObserver(BPMObserver* o);
	void notifyBPMObservers();
	void removeObserver(BeatObserver* o);
	void removeObserver(BPMObserver* o);
	HANDLE getMusicMessageEvent() const;
	IDirectMusicPerformance8* getSoundPerformance() const;
private:
	void setUpMidi();
	void buildTrackAndStart();
	int bpm;
	HANDLE musicMessageEvent;
	IDirectMusicLoader8* soundLoader;
	IDirectMusicPerformance8* soundPerformance;
	IDirectMusicSegment8* audioSound;
	IDirectMusicGraph8* graph;
	CWinThread* musicMessageThread;
	string soundFile;
	list<class BeatObserver*> beatObservers;
	list<class BPMObserver*> bpmObservers;
	bool run;

	DISABLE_COPY_AND_ASSIGN(BeatModel)
};

