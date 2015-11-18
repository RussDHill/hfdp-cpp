#include "stdafx.h"
#include "Singleton.h"

shared_ptr<Singleton> Singleton::uniqueInstance;
CriticalSection Singleton::criticalSection;

Singleton::Singleton()
	:value(0)
{

}

shared_ptr<Singleton>& Singleton::getInstance()
{
	CriticalSectionGuard guard(criticalSection);

	if (!uniqueInstance) {
		uniqueInstance = shared_ptr<Singleton>(new Singleton(), mem_fun(&Singleton::destroy));
	}

	return uniqueInstance;
}

bool Singleton::destroy()
{
	delete this;
	return true;
}

void Singleton::setValue(int in)
{
	value = in;
}

int Singleton::getValue()
{
	return value;
}
