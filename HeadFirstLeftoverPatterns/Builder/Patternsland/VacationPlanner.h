#pragma once

#include "VacationComponent.h"

class VacationPlanner : public VacationComponent  
{
public:
	VacationPlanner(struct tm* date, string name, string description);
	virtual ~VacationPlanner();
	virtual string getName();
	virtual string getDescription();
	virtual string getDate();
	virtual void print();
	virtual void add(shared_ptr<VacationComponent> vacationComponent);
	virtual void removeComp(shared_ptr<VacationComponent> vacationComponent);
	virtual shared_ptr<VacationComponent> getChild(int i);
private:
	struct tm* plannerDate;
	string plannerDescription;
	string plannerName;
	vector< shared_ptr<VacationComponent> > vacationComponents;

};

