#pragma once

#include "IFace.h"

class FlyCommand : public IExpression  
{
public:	
	virtual void interpret(shared_ptr<Context> context);
	FlyCommand();
	virtual ~FlyCommand();

	DISABLE_COPY_AND_ASSIGN(FlyCommand)
};
