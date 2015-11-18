// HeartAdapter.h: interface for the CHeartAdapter class.
//
#pragma once

#include "IFace.h"

class HeartAdapter : public BeatModelInterface  
{
public:
	HeartAdapter(shared_ptr<HeartModelInterface> model);
	HeartAdapter();
	virtual ~HeartAdapter();
	virtual void initialize();
	virtual void on();
	virtual void off();
	virtual void setBPM(int bpm);
	virtual int getBPM();
	virtual void registerObserver(BeatObserver* o);
	virtual void removeObserver(BeatObserver* o);
	virtual void registerObserver(BPMObserver* o);
	virtual void removeObserver(BPMObserver* o);
private:
	shared_ptr<HeartModelInterface> heart;

	DISABLE_COPY_AND_ASSIGN(HeartAdapter)
};
