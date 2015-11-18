#include "stdafx.h"
#include "Singleton.h"

volatile Singleton* Singleton::uniqueInstance = NULL;
CriticalSection Singleton::criticalSection;


Singleton::Singleton()
	:value(0)
{

}

Singleton::~Singleton()
{

}

Singleton* Singleton::getInstance()
{	
	if (uniqueInstance == NULL) {

		CriticalSectionGuard guard(criticalSection);

		if (uniqueInstance == NULL) {
			uniqueInstance = new Singleton();
		}
	}

	return const_cast<Singleton*>(uniqueInstance);
}

void Singleton::setValue(int in)
{
	value = in;
}

int Singleton::getValue()
{
	return value;
}
