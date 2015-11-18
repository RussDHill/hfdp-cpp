#pragma once

#include "IFace.h"

class RightCommand : public IExpression  
{
public:
	virtual void interpret(shared_ptr<Context> context);
	RightCommand();
	virtual ~RightCommand();

	DISABLE_COPY_AND_ASSIGN(RightCommand)
};
