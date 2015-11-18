#pragma once

#include "VacationComponent.h"

class VacationItem : public VacationComponent  
{
public:
	VacationItem(struct tm* date, string name, string description, double price);
	virtual ~VacationItem();
	virtual string getName();
	virtual string getDescription();
	virtual string getDate();
	virtual double getPrice();
	virtual void print();
private:
	double itemPrice;
	string itemDescription;
	string itemName;
	struct tm* itemDate;
};

