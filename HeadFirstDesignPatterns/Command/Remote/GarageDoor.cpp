#include "stdafx.h"
#include "GarageDoor.h"

GarageDoor::GarageDoor(const string& location)
	:garageDoorLocation(location)
{

}

GarageDoor::~GarageDoor()
{

}

void GarageDoor::up()
{
	cout << garageDoorLocation << " garage door is open" << endl;
}

void GarageDoor::down()
{
	cout << garageDoorLocation << " garage door is closed" << endl;
}

void GarageDoor::stop()
{
	cout << garageDoorLocation << " garage door is stopped" << endl;
}

void GarageDoor::lightOn()
{
	cout << garageDoorLocation << " garage light is on" << endl;
}

void GarageDoor::lightOff()
{
	cout << garageDoorLocation << " garage light is on" << endl;
}
