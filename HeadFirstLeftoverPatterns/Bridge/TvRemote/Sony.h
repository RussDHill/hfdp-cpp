#pragma once

#include "IFace.h"

class Sony : public ITv  
{
public:
	Sony();
	virtual ~Sony();
	virtual void on();
	virtual void off();
	virtual void tuneChannel(int channel);

	DISABLE_COPY_AND_ASSIGN(Sony)
};
