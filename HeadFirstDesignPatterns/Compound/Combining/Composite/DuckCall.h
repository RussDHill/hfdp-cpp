#pragma once

#include "IFace.h"

class DuckCall : public Quackable  
{
public:
	virtual void quack() const;
	DuckCall();
	virtual ~DuckCall();
	virtual string toString() const;

	DISABLE_COPY_AND_ASSIGN(DuckCall)
};

