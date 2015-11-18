#pragma once

#include "IFace.h"

class IWidget;
class Alarm;
class Calendar;
class CoffeePot;
class Sprinkler;

class HouseDirector : public IDirector 
{
public:
	void startSimulation(int days);
	void onEvent(weak_ptr<IWidget> widget);
	HouseDirector();
	virtual ~HouseDirector();
private:
	void Wait(int time);

	shared_ptr<Alarm> alarm;
	shared_ptr<Calendar> calendar;
	shared_ptr<CoffeePot> coffeePot;
	shared_ptr<Sprinkler> sprinkler;
};
