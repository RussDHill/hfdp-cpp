#pragma once

#include "IFace.h"

class Calendar : public IWidget  
{
public:
	void outputDay();
	void newDay();
	int checkCalander();
	void weekDay();
	void trashDay();
	void weekend();
	virtual void onEvent();
	Calendar(IDirector* director);
	virtual ~Calendar();
private:
	int state;
	int day;
	enum dayOfWeek {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};
};
