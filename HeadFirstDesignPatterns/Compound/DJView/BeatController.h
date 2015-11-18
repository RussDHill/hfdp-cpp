#pragma once

#include "IFace.h"

class DJView;

class BeatController : public ControllerInterface  
{
public:
	virtual void setView(DJView* view);
	BeatController(shared_ptr<BeatModelInterface> beatModel);
	virtual ~BeatController();
	virtual void start();
	virtual void stop();
	virtual void quit();
	virtual void increaseBPM();
	virtual void decreaseBPM();
	virtual void setBPM(int bpm);
private:
	shared_ptr<BeatModelInterface> model;
	DJView* view;

	DISABLE_COPY_AND_ASSIGN(BeatController)
};

