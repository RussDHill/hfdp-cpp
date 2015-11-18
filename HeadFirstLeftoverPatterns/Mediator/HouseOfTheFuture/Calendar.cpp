#include "stdafx.h"
#include "Calendar.h"

Calendar::Calendar(IDirector* director) 
	:IWidget(director)
{
	state = WEEKEND;
	day = SUNDAY;
}

Calendar::~Calendar()
{

}

void Calendar::onEvent()
{
	widgetDirector->onEvent(this->shared_from_this());
}

void Calendar::weekend()
{
	state = WEEKEND;
	onEvent();
}

void Calendar::trashDay()
{
	state = TRASH_DAY;
	onEvent();
}

void Calendar::weekDay()
{
	state = WEEK_DAY;
	onEvent();
}

int Calendar::checkCalander()
{
	return state;
}

void Calendar::newDay()
{
	if (day == SATURDAY) {
		day = SUNDAY;
	} else {
		day++;
	}
	outputDay();

	if ((day == SATURDAY) || (day == SUNDAY)) {
		weekend();
	} else if (day == FRIDAY) {
		trashDay();
	} else {
		weekDay();
	}
}

void Calendar::outputDay()
{
	switch(day) 
	{
		case SUNDAY:	
			cout << endl << "Sunday" << endl;
			break;
		case MONDAY:	
			cout << endl << "Monday" << endl;
			break;
		case TUESDAY:	
			cout << endl << "Tuesday" << endl;
			break;
		case WEDNESDAY:	
			cout << endl << "Wednesday" << endl;
			break;
		case THURSDAY:	
			cout << endl << "Thursday" << endl;
			break;
		case FRIDAY:	
			cout << endl << "Friday" << endl;
			break;
		case SATURDAY:	
			cout << endl << "Saturday" << endl;
	}
}