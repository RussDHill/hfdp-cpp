#include "stdafx.h"
#include "CoolerSingleton.h"

CoolerSingleton::CoolerSingleton()
{
	
}

CoolerSingleton::~CoolerSingleton()
{

}

void CoolerSingleton::setValue(int in)
{
	value = in;
}

int CoolerSingleton::getValue()
{
	return value;
}
