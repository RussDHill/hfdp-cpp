// VacationItem.cpp: Defines the entry point for the console application.
//

#include "stdafx.h"
#include "VacationItem.h"

VacationItem::VacationItem(struct tm* date, string name, string description, double price)
	:itemDate(date), itemName(name), itemDescription(description), itemPrice(price)
{

}

VacationItem::~VacationItem()
{

}

string VacationItem::getName()
{
	return itemName;
}

string VacationItem::getDescription()
{
	return itemDescription;
}

string VacationItem::getDate()
{
	ostringstream buffer;

	string timeDate(asctime(itemDate));
	buffer << timeDate.substr(0, 11) << timeDate.substr(20, 4);

	return buffer.str();
}


double VacationItem::getPrice()
{
	return itemPrice;
}

void VacationItem::print()
{
	cout << setprecision(2) << fixed << "  " << getName() << "  ";
	cout << getPrice() << " -- " << getDescription() << endl;
}