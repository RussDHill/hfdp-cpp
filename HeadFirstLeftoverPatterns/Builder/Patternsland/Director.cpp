// Director.cpp: Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Director.h"
#include "VacationPlanner.h"
#include "IFace.h"

Director::Director(shared_ptr<IBuilder> builder)
	:directorBuilder(builder)
{

}

Director::~Director()
{

}

void Director::constructPlanner(struct tm& startDate, string name)
{
	directorBuilder->createVacation(&startDate, name);
	directorBuilder->buildDay(&startDate);
	directorBuilder->addHotel(&startDate, "Grand Facadian");
	directorBuilder->addTickets(&startDate);
	directorBuilder->addReservation(&startDate, "The Cafe");
	directorBuilder->addDay();

	struct tm dateOne = {0};
	memcpy(&dateOne, &startDate, sizeof(tm));
	dateOne.tm_mday++;
	dateOne.tm_wday++;
	directorBuilder->buildDay(&dateOne);
	directorBuilder->addHotel(&dateOne, "Grand Facadian");
	directorBuilder->addTickets(&dateOne);
	directorBuilder->addSpecialEvent(&dateOne, "Patterns on Ice", 25.00);
	directorBuilder->addReservation(&dateOne, "CafeTwo");
	directorBuilder->addDay();

	struct tm dateTwo = {0};
	memcpy(&dateTwo, &dateOne, sizeof(tm));
	dateTwo.tm_mday++;
	dateTwo.tm_wday++;
	directorBuilder->buildDay(&dateTwo);
	directorBuilder->addHotel(&dateTwo, "Grand Facadian");
	directorBuilder->addTickets(&dateTwo);
	directorBuilder->addSpecialEvent(&dateTwo, "Cirque Du Patterns", 25.00);
	directorBuilder->addReservation(&dateTwo, "Cappuccino's");
	directorBuilder->addDay();

	shared_ptr<VacationComponent> vacation = directorBuilder->getVacationPlanner();

	vacation->print();
	cout << endl;
}

