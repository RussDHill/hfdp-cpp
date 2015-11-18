#include "stdafx.h"
#include "HotterSingleton.h"

HotterSingleton::HotterSingleton()
{
	
}

HotterSingleton::~HotterSingleton()
{

}

Singleton* HotterSingleton::getInstance()
{
	static HotterSingleton uniqueInstance;
	return &uniqueInstance;
}

void HotterSingleton::setValue(int in)
{
	value = in;
}

int HotterSingleton::getValue()
{
	return value;
}
