#include "stdafx.h"
#include "DynamicPlayerGeneratedMonster.h"

DynamicPlayerGeneratedMonster::DynamicPlayerGeneratedMonster()
{
	name = new char[MAX_PATH];
	StringCchCopy(name, MAX_PATH, "Dynamic Player Generated Monster");
}

DynamicPlayerGeneratedMonster::~DynamicPlayerGeneratedMonster()
{
	delete name;
}

shared_ptr<IMonster> DynamicPlayerGeneratedMonster::clone()
{
	return shared_ptr<IMonster>(new DynamicPlayerGeneratedMonster(*this));
}

DynamicPlayerGeneratedMonster::DynamicPlayerGeneratedMonster(const DynamicPlayerGeneratedMonster& src)
{
	name = new char[MAX_PATH];
	StringCchCopy(name, MAX_PATH, src.name);
}

PSTR DynamicPlayerGeneratedMonster::toString()
{
	return name;
}
