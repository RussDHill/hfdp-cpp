#include "stdafx.h"
#include "HotterSingleton.h"

HotterSingleton::HotterSingleton()
{
	
}

HotterSingleton::~HotterSingleton()
{

}

void HotterSingleton::setValue(int in)
{
	value = in;
}

int HotterSingleton::getValue()
{
	return value;
}
