#pragma once

#include "IFace.h"

class WildTurkey : public Turkey  
{
public:
	virtual void gobble();
	virtual void fly();
	WildTurkey();
	virtual ~WildTurkey();

	DISABLE_COPY_AND_ASSIGN(WildTurkey)
};
