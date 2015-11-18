#include "stdafx.h"
#include "Sequence.h"

Sequence::Sequence()
{

}

Sequence::~Sequence()
{

}

void Sequence::interpret(shared_ptr<Context> context)
{
	vector< shared_ptr<IExpression> >::const_iterator itr;

	for(itr=expressions.begin();itr!=expressions.end();++itr) {
		(*itr)->interpret(context);
	}
}

void Sequence::addExpression(shared_ptr<IExpression> expression)
{
	expressions.push_back(expression);
}
