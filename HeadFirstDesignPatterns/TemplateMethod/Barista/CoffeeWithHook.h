#pragma once

#include "CaffeineBeverageWithHook.h"

class CoffeeWithHook : public CaffeineBeverageWithHook  
{
public:
	virtual bool customerWantsCondiments() const;
	virtual void brew();
	virtual void addCondiments();
	CoffeeWithHook();
	virtual ~CoffeeWithHook();
private:
	string getUserInput() const;
};
