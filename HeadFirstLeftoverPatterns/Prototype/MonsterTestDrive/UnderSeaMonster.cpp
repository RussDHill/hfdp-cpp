#include "stdafx.h"
#include "UnderSeaMonster.h"

UnderSeaMonster::UnderSeaMonster()
{
	name = new char[MAX_PATH];
	StringCchCopy(name, MAX_PATH, "Under Sea Monster");
}

UnderSeaMonster::~UnderSeaMonster()
{
	delete name;
}

shared_ptr<IMonster> UnderSeaMonster::clone()
{
	return shared_ptr<IMonster>(new UnderSeaMonster(*this));
}

UnderSeaMonster::UnderSeaMonster(const UnderSeaMonster& src)
{
	name = new char[MAX_PATH];
	StringCchCopy(name, MAX_PATH, src.name);
}

PSTR UnderSeaMonster::toString()
{
	return name;
}
