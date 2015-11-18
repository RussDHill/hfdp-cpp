#include "stdafx.h"
#include "WellKnownMonster.h"

WellKnownMonster::WellKnownMonster()
{
	name = new char[MAX_PATH];
	StringCchCopy(name, MAX_PATH, "Well Known Monster");
}

WellKnownMonster::~WellKnownMonster()
{
	delete name;
}

shared_ptr<IMonster>  WellKnownMonster::clone()
{
	return shared_ptr<IMonster> (new WellKnownMonster(*this));
}

WellKnownMonster& WellKnownMonster::operator=(const WellKnownMonster& rhs)
{

	if (this == &rhs) {
		return (*this);
	}

	delete name;

	name = new char[MAX_PATH];
	StringCchCopy(name, MAX_PATH, rhs.name);

	return (*this);
}

WellKnownMonster::WellKnownMonster(const WellKnownMonster& src)
{
	name = new char[MAX_PATH];
	StringCchCopy(name, MAX_PATH, src.name);
}

PSTR WellKnownMonster::toString()
{
	return name;
}
