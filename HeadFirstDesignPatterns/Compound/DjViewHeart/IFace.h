#pragma once

#define DISABLE_COPY_AND_ASSIGN(Class) private: Class(const Class&); Class& operator=(const Class&);

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
	virtual void initialize() = 0;
	virtual void on() = 0;
	virtual void off() = 0;
	virtual void setBPM(int bpm) = 0;
	virtual int getBPM() = 0;
	virtual void registerObserver(BeatObserver* o) = 0;
	virtual void removeObserver(BeatObserver* o) = 0;
	virtual void registerObserver(BPMObserver* o) = 0;
	virtual void removeObserver(BPMObserver* o) = 0;
	virtual ~BeatModelInterface(){};
};

class HeartModelInterface
{
public:
	virtual int getHeartRate() = 0;
	virtual void registerObserver(BeatObserver* o) = 0;
	virtual void removeObserver(BeatObserver* o) = 0;
	virtual void registerObserver(BPMObserver* o) = 0;
	virtual void removeObserver(BPMObserver* o) = 0;
	virtual ~HeartModelInterface(){};
};

class ControllerInterface
{
public:
	virtual void setView(DJView* view) = 0;
	virtual void start() = 0;
	virtual void stop() = 0;
	virtual void increaseBPM() = 0;
	virtual void decreaseBPM() = 0;
	virtual void setBPM(int bpm) = 0;
	virtual ~ControllerInterface(){};
};


