#include "stdafx.h"
#include "Screen.h"


Screen::Screen(const string& description) 
	:screenDescription(description)
{

}

Screen::~Screen()
{

}

void Screen::up()
{
	cout << screenDescription << " going up" << endl;
}

void Screen::down()
{
	cout << screenDescription << " going down" << endl;
}

string Screen::toString() const
{
	return screenDescription;
}
