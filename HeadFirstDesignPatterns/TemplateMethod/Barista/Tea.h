#pragma once

#include "CaffeineBeverage.h"

class Tea : public CaffeineBeverage  
{
public:
	virtual void brew();
	virtual void addCondiments();
	Tea();
	virtual ~Tea();
};
