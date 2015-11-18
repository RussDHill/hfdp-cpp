#pragma once

#include "Pizza.h"

class ChicagoStyleVeggiePizza : public Pizza  
{
public:
	virtual void cut();
	ChicagoStyleVeggiePizza();
	virtual ~ChicagoStyleVeggiePizza();

};
