#pragma once

#include "CaffeineBeverageWithHook.h"

class TeaWithHook : public CaffeineBeverageWithHook  
{
public:
	virtual bool customerWantsCondiments() const;
	virtual void brew();
	virtual void addCondiments();
	TeaWithHook();
	virtual ~TeaWithHook();
private:
	string getUserInput() const;
};
