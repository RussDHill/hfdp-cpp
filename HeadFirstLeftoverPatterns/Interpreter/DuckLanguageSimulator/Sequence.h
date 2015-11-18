#pragma once

#include "IFace.h"

class Sequence : public IExpression  
{
public:
	void addExpression(shared_ptr<IExpression> expression);
	virtual void interpret(shared_ptr<Context> context);
	Sequence();
	virtual ~Sequence();
private:
	vector< shared_ptr<IExpression> > expressions;

	DISABLE_COPY_AND_ASSIGN(Sequence)
};

