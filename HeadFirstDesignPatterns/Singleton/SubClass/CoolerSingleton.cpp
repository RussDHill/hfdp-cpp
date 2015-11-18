#include "stdafx.h"
#include "CoolerSingleton.h"

CoolerSingleton::CoolerSingleton()
{
	
}

CoolerSingleton::~CoolerSingleton()
{

}

Singleton* CoolerSingleton::getInstance()
{
	static CoolerSingleton uniqueInstance;
	return &uniqueInstance;
}

void CoolerSingleton::setValue(int in)
{
	value = in;
}

int CoolerSingleton::getValue()
{
	return value;
}
