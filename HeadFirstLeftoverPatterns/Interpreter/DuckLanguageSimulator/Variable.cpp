#include "stdafx.h"
#include "Variable.h"

Variable::Variable(string name)
	:variableName(name)
{
	srand(static_cast<unsigned int>(time(0)));
}

Variable::~Variable()
{

}

void Variable::interpret(shared_ptr<Context> context)
{

}

bool Variable::evaluate() 
{
	if(value < 0) {
		value = 1;
	} else {
		value = rand() % 10;
	}

	if(value == 0) {
		cout << variableName.c_str() << " = false" << endl;
		return false;
	} else {
		cout << "while " << variableName.c_str() << " = true" << endl;
		return true;
	}
}