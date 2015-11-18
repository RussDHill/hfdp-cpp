// VacationPlanner.cpp: Defines the entry point for the console application.
//

#include "stdafx.h"
#include "VacationPlanner.h"

VacationPlanner::VacationPlanner(struct tm* date, string name, string description)
	:plannerDate(date), plannerName(name), plannerDescription(description)
{

}

VacationPlanner::~VacationPlanner()
{

}

void VacationPlanner::add(shared_ptr<VacationComponent> vacationComponent)
{
	vacationComponents.push_back(vacationComponent);
}

void VacationPlanner::removeComp(shared_ptr<VacationComponent> vacationComponent)
{
	remove(vacationComponents.begin(), vacationComponents.end(), vacationComponent);
}

shared_ptr<VacationComponent> VacationPlanner::getChild(int i)
{
	return vacationComponents.at(i);
}

string VacationPlanner::getName()
{
	return plannerName;
}

string VacationPlanner::getDescription()
{
	return plannerDescription;
}

string VacationPlanner::getDate()
{
	ostringstream buffer;

	string timeDate(asctime(plannerDate));
	buffer << timeDate.substr(0, 11) << timeDate.substr(20, 4);

	return buffer.str();
}

void VacationPlanner::print()
{
	cout << endl << "--------------------" << endl << getName() << " " << getDescription();
	cout << " " << getDate() << endl << "--------------------" << endl;

	vector< shared_ptr<VacationComponent> >::iterator itr;
	for (itr=vacationComponents.begin();itr!=vacationComponents.end();++itr) {
		(*itr)->print();
	}
}