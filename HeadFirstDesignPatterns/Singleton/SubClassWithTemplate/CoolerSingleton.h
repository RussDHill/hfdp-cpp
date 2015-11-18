#pragma once

#include "Singleton.h"

class CoolerSingleton : public Singleton<CoolerSingleton>
{
	friend Singleton<CoolerSingleton>;
public:
	virtual int getValue();
	virtual void setValue(int in);
private:
	virtual ~CoolerSingleton();
	CoolerSingleton();
	int value;
};
