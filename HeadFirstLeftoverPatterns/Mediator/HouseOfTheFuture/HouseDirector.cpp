#include "stdafx.h"
#include "HouseDirector.h"
#include "Alarm.h"
#include "Calendar.h"
#include "CoffeePot.h"
#include "Sprinkler.h"

HouseDirector::HouseDirector()
{
	alarm = shared_ptr<Alarm>(new Alarm(this));
	calendar = shared_ptr<Calendar>(new Calendar(this));
	coffeePot = shared_ptr<CoffeePot>(new CoffeePot(this));
	sprinkler = shared_ptr<Sprinkler>(new Sprinkler(this));
}

HouseDirector::~HouseDirector()
{

}

void HouseDirector::onEvent(weak_ptr<IWidget> widget)
{
	int alarmState = alarm->checkAlarm();
	int calendarState = calendar->checkCalander();
	int coffeePotState = coffeePot->checkCoffee();
	int sprinklerState = sprinkler->checkSprinkler();
	
	if(widget.lock() == alarm) {
		if (alarmState == ON) {
			cout << "Good Morning Objectville!" << endl;
			if (calendarState != WEEKEND) {
				coffeePot->on();
				alarm->off();
			}
		}
	} else if (widget.lock() == calendar) {
		if (calendarState == WEEK_DAY) {
			cout << "Week day - set the alarm" << endl;
			sprinkler->setSprinkler(1);
			alarm->setAlarm(1);
		} else if (calendarState == TRASH_DAY) {
			cout << "Trash day - set the alarm early" << endl;
			sprinkler->setSprinkler(1);
			alarm->setAlarm(1);
		} else if (calendarState == WEEKEND) {
			cout << "Weekend - alarm not set" << endl;
			sprinkler->setSprinkler(1);
		}
	} else if (widget.lock() == coffeePot) {
		if (coffeePotState == ON) {
			cout << "Coffee pot on" << endl;
			Wait(1);
			coffeePot->off();
			cout << "Coffee ready" << endl;
		}
	} else if (widget.lock() == sprinkler) {
		if (sprinklerState == ON) {
			cout << "Sprinkler on" << endl;
			Wait(1);
			sprinkler->off();
			cout << "Sprinkler off" << endl;
		}
	}
}

void HouseDirector::startSimulation(int days)
{
	for(int i=0;i<days;i++) {
		Wait(1);
		calendar->newDay();
	}
}

void HouseDirector::Wait(int time)
{
	time *= 1000;
	HANDLE event = CreateEvent(0, true, false, NULL);
	WaitForSingleObject(event, time);
	CloseHandle(event);
}