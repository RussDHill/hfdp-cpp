#pragma once

#include "stdafx.h"

class DJView;

// Interfaces	
class BeatObserver
{
public:
	virtual void updateBeat() = 0;
	virtual ~BeatObserver(){};
};

class BPMObserver
{
public:
	virtual void updateBPM() = 0;
	virtual ~BPMObserver(){};
};

class BeatModelInterface
{
public:
	virtual int initialize() = 0;
	virtual void on() = 0;
	virtual void off() = 0;
	virtual void setBPM(int bpm) = 0;
	virtual int getBPM() = 0;
	virtual string getError(int err) = 0;
	virtual void registerObserver(BeatObserver* o) = 0;
	virtual void removeObserver(BeatObserver* o) = 0;
	virtual void registerObserver(BPMObserver* o) = 0;
	virtual void removeObserver(BPMObserver* o) = 0;
	virtual ~BeatModelInterface(){};
};


