#include "stdafx.h"
#include "Singleton.h"

Singleton::Singleton()
	:value(0)
{

}

Singleton* Singleton::getInstance()
{
	static Singleton uniqueInstance;

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
