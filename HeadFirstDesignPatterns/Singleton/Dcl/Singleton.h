#pragma once

#include "CriticalSection.h"

class Singleton  
{
public:
	int getValue();
	void setValue(int in);
	static Singleton* getInstance();
	virtual ~Singleton();
private:
	int value;
	Singleton();
	static CriticalSection criticalSection;
	volatile static Singleton* uniqueInstance;
};
