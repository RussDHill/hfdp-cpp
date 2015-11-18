#pragma once

#include "Pizza.h"

class ChicagoStyleCheesePizza : public Pizza  
{
public:
	virtual void cut();
	ChicagoStyleCheesePizza();
	virtual ~ChicagoStyleCheesePizza();

};
