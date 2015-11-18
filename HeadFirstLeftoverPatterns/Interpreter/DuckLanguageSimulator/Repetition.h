#pragma once

#include "IFace.h"

class Variable;

class Repetition : public IExpression  
{
public:
	virtual void interpret(shared_ptr<Context> context);
	Repetition(shared_ptr<Variable> variable, shared_ptr<IExpression> expression);
	virtual ~Repetition();
private:
	shared_ptr<Variable> repetitionVariable;
	shared_ptr<IExpression> repetitionExpression;

	DISABLE_COPY_AND_ASSIGN(Repetition)
};
