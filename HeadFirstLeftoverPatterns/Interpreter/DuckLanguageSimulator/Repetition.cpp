#include "stdafx.h"
#include "Repetition.h"
#include "Variable.h"

Repetition::Repetition(shared_ptr<Variable> variable, shared_ptr<IExpression> expression)
	:repetitionVariable(variable), repetitionExpression(expression)
{

}

Repetition::~Repetition()
{

}

void Repetition::interpret(shared_ptr<Context> context)
{
	while(repetitionVariable->evaluate()) {
		repetitionExpression->interpret(context);
	}
}
