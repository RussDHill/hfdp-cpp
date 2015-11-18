#pragma once

#include "IFace.h"

class QuackCommand : public IExpression  
{
public:
	virtual void interpret(shared_ptr<Context> context);
	QuackCommand();
	virtual ~QuackCommand();

	DISABLE_COPY_AND_ASSIGN(QuackCommand)
};
