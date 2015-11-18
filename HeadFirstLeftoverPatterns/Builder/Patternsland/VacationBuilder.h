#pragma once

#include "IFace.h"

class VacationComponent;

class VacationBuilder : public IBuilder  
{
public:
	virtual void createVacation(struct tm* startDate, string name);
	virtual void buildDay(struct tm* date);
	virtual void addDay();
	virtual void addHotel(struct tm* date, string name);
	virtual void addReservation(struct tm* date, string name);
	virtual void addSpecialEvent(struct tm* date, string name, double price);
	virtual void addTickets(struct tm* date);
	virtual shared_ptr<VacationComponent> getVacationPlanner();
	VacationBuilder();
	virtual ~VacationBuilder();
private:
	shared_ptr<VacationComponent> vacation;
	shared_ptr<VacationComponent> day;

	DISABLE_COPY_AND_ASSIGN(VacationBuilder)
};
