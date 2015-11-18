#pragma once

#include "IFace.h"

class DJView;

class HeartController : public ControllerInterface
{
public:
	virtual void setView(DJView* view);
	virtual void start();
	virtual void stop();
	virtual void increaseBPM();
	virtual void decreaseBPM();
	virtual void setBPM(int bpm);
	HeartController(shared_ptr<HeartModelInterface> modelIn);
	HeartController();
	virtual ~HeartController();
private:
	shared_ptr<HeartModelInterface> model;
	DJView* view;

	DISABLE_COPY_AND_ASSIGN(HeartController)
};
