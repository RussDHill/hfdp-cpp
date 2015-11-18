#pragma once

#include "IFace.h"

UINT HeartThreadProc(LPVOID param);

class HeartModel : public HeartModelInterface  
{
public:
	void setTime(int time);
	int getTime();
	virtual int getHeartRate();
	void notifyBeatObservers();
	void notifyBPMObservers();
	virtual void registerObserver(BeatObserver* o);
	virtual void removeObserver(BeatObserver* o);
	virtual void registerObserver(BPMObserver* o);
	virtual void removeObserver(BPMObserver* o);
	HeartModel();
	virtual ~HeartModel();
private:
	list<class BeatObserver*> beatObservers;
	list<class BPMObserver*> bpmObservers;
	int time;
    int bpm;
	CWinThread* heartThread;

	DISABLE_COPY_AND_ASSIGN(HeartModel)
};
