#pragma once

#include "IFace.h"

class Rca : public ITv  
{
public:
	Rca();
	virtual ~Rca();
	virtual void on();
	virtual void off();
	virtual void tuneChannel(int channel);

	DISABLE_COPY_AND_ASSIGN(Rca)
};


