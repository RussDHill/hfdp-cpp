#pragma once

#include "Singleton.h"

class HotterSingleton : public Singleton
{
public:
	static Singleton* getInstance();
	virtual int getValue();
	virtual void setValue(int in);
private:
	virtual ~HotterSingleton();
	HotterSingleton();
	int value;
};
