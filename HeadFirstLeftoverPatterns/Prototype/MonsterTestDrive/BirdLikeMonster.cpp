#include "stdafx.h"
#include "BirdLikeMonster.h"

BirdLikeMonster::BirdLikeMonster()
{
	name = new char[MAX_PATH];
	StringCchCopy(name, MAX_PATH, "Bird Like Monster");
}

BirdLikeMonster::~BirdLikeMonster()
{
	delete name;
}

shared_ptr<IMonster> BirdLikeMonster::clone()
{
	return shared_ptr<IMonster>(new BirdLikeMonster(*this));
}

BirdLikeMonster::BirdLikeMonster(const BirdLikeMonster& src)
{
	name = new char[MAX_PATH];
	StringCchCopy(name, MAX_PATH, src.name);
}

PSTR BirdLikeMonster::toString()
{
	return name;
}
