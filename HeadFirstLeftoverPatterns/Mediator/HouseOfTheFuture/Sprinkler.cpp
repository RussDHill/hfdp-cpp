#include "stdafx.h"
#include "Sprinkler.h"

Sprinkler::Sprinkler(IDirector* director) 
	:IWidget(director)
{
	state = OFF;
}

Sprinkler::~Sprinkler()
{

}

void Sprinkler::onEvent()
{
	widgetDirector->onEvent(this->shared_from_this());
}

void Sprinkler::on()
{
	state = ON;
	onEvent();
}

void Sprinkler::off()
{
	state = OFF;
	onEvent();
}

int Sprinkler::checkSprinkler()
{
	return state;
}

void Sprinkler::setSprinkler(int startTime)
{
	startTime *= 1000;
	HANDLE event = CreateEvent(0, true, false, NULL);
	WaitForSingleObject(event, startTime);
	CloseHandle(event);
	on();
}
