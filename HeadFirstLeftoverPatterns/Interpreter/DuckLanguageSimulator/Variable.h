#pragma once

#include "IFace.h"

class Variable : public IExpression  
{
public:
	bool evaluate();
	virtual void interpret(shared_ptr<Context> context);
	Variable(string name);
	virtual ~Variable();
private:
	string variableName;
	int value;

	DISABLE_COPY_AND_ASSIGN(Variable)
};
