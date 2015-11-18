#pragma once

#include "Singleton.h"

class HotterSingleton : public Singleton<HotterSingleton>
{
	friend Singleton<HotterSingleton>;
public:
	virtual int getValue();
	virtual void setValue(int in);
private:
	virtual ~HotterSingleton();
	HotterSingleton();
	int value;
};
