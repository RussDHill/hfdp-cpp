#include "stdafx.h"
#include "Singleton.h"

Singleton Singleton::uniqueInstance;

Singleton::Singleton()
	:value(0)
{

}

Singleton* Singleton::getInstance()
{
	return &uniqueInstance;
}

void Singleton::setValue(int in)
{
	value = in;
}

int Singleton::getValue()
{
	return value;
}
