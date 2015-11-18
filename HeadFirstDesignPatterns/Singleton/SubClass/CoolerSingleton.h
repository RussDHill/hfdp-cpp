#pragma once

#include "Singleton.h"

class CoolerSingleton : public Singleton
{
public:
	static Singleton* getInstance();
	virtual int getValue();
	virtual void setValue(int in);
private:
	virtual ~CoolerSingleton();
	CoolerSingleton();
	int value;
};
