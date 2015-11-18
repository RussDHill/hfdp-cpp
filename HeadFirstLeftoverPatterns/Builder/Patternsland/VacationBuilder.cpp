// VacationBuilder.cpp: Defines the entry point for the console application.
//

#include "stdafx.h"
#include "VacationBuilder.h"
#include "VacationPlanner.h"
#include "VacationItem.h"

VacationBuilder::VacationBuilder()
{

}

VacationBuilder::~VacationBuilder()
{

}

void VacationBuilder::createVacation(struct tm* startDate, string name)
{
	vacation = shared_ptr<VacationComponent>(new VacationPlanner(startDate, name, "Vacation"));
}

void VacationBuilder::buildDay(struct tm* date)
{
	day = shared_ptr<VacationComponent>(new VacationPlanner(date, "", "Day"));
}

void VacationBuilder::addDay()
{
	vacation->add(day);
}

void VacationBuilder::addHotel(struct tm* date, string name)
{
	shared_ptr<VacationComponent> hotel(new VacationItem(date, name, "Hotel", 50.00));
	day->add(hotel);
}

void VacationBuilder::addReservation(struct tm* date, string name)
{
	shared_ptr<VacationComponent> dinner(new VacationItem(date, name, "Dinner", 0));
	day->add(dinner);
}

void VacationBuilder::addSpecialEvent(struct tm* date, string name, double price)
{
	shared_ptr<VacationComponent> event(new VacationItem(date, name, "Event", price));
	day->add(event);
}

void VacationBuilder::addTickets(struct tm*  date)
{
	shared_ptr<VacationComponent> park(new VacationItem(date, "Ticket", "Park", 20.00));
	day->add(park);
}

shared_ptr<VacationComponent> VacationBuilder::getVacationPlanner()
{
	return vacation;
}

