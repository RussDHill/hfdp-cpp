#include "stdafx.h"
#include "Alarm.h"

Alarm::Alarm(IDirector* director) 
	:IWidget(director)
{
	state = OFF;
}

Alarm::~Alarm()
{

}

void Alarm::onEvent()
{
	widgetDirector->onEvent(this->shared_from_this());
}

void Alarm::on()
{
	state = ON;
	onEvent();
}

void Alarm::off()
{
	state = OFF;
	onEvent();
}

int Alarm::checkAlarm()
{
	return state;
}

void Alarm::setAlarm(int delay)
{
	delay = delay * 1000;
	HANDLE event = CreateEvent(0, true, false, NULL);
	WaitForSingleObject(event, delay);
	on();
}
