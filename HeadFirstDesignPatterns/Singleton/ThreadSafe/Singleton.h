#pragma once

#include "CriticalSection.h"

class Singleton  
{
public:
	int getValue();
	void setValue(int in);
	static shared_ptr<Singleton>& getInstance();
private:
	static shared_ptr<Singleton> uniqueInstance;
	int value;
	bool destroy();
	Singleton();
	static CriticalSection criticalSection;
};
