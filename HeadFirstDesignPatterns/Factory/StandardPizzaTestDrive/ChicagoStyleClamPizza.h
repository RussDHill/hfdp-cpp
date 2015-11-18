#pragma once

#include "Pizza.h"

class ChicagoStyleClamPizza : public Pizza  
{
public:
	virtual void cut();
	ChicagoStyleClamPizza();
	virtual ~ChicagoStyleClamPizza();
};
