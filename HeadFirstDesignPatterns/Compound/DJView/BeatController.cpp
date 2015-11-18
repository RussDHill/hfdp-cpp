
// BeatController.cpp : implementation file
//

#include "stdafx.h"
#include "DJTestDrive.h"
#include "BeatController.h"
#include "DJView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


BeatController::BeatController(shared_ptr<BeatModelInterface> beatModel)
	:model(beatModel)
{
	model->initialize();
}

void BeatController::setView(DJView* view)
{
	this->view = view;
}

BeatController::~BeatController()
{
	view = 0;
}

void BeatController::start()
{
	model->on();
	view->disableStartMenuItem();
	view->enableStopMenuItem();
}
  
void BeatController::stop()
{
	model->off();
	view->disableStopMenuItem();
	view->enableStartMenuItem();
}

void BeatController::quit()
{
	model->quit();
}
     
void BeatController::increaseBPM()
{
	int bpm = model->getBPM();
	model->setBPM(bpm + 1);
}
    
void BeatController::decreaseBPM()
{
	int bpm = model->getBPM();
	model->setBPM(bpm - 1);
}
  
void BeatController::setBPM(int bpm)
{
	model->setBPM(bpm);
}

