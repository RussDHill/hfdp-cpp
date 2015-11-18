#pragma once

#define DISABLE_COPY_AND_ASSIGN(Class) private: Class(const Class&); Class& operator=(const Class&);

class VacationComponent;

// Interfaces
class IBuilder
{
public:
	virtual void createVacation(struct tm* startDate, string name) = 0;
	virtual void buildDay(struct tm* date) = 0;
	virtual void addDay() = 0;
	virtual void addHotel(struct tm* date, string name) = 0;
	virtual void addReservation(struct tm* date, string name) = 0;
	virtual void addSpecialEvent(struct tm* date, string name, double price) = 0;
	virtual void addTickets(struct tm* date) = 0;
	virtual shared_ptr<VacationComponent> getVacationPlanner() = 0;
	virtual ~IBuilder() {};
};

