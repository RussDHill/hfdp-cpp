#include "stdafx.h"
#include "State.h"

State::State()
{
	level = 1;
	subLevel = 1;
}

State::~State()
{

}

void State::incrementLevel()
{
	level++;
}

int State::getLevel()
{
	return level;
}

void State::incrementSubLevel()
{
	subLevel++;
}

void State::resetSubLevel()
{
	subLevel = 1;
}

int State::getSubLevel()
{
	return subLevel;
}

void State::resetLevel()
{
	level = 1;
}