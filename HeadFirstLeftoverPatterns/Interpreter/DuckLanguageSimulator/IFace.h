#pragma once

#define DISABLE_COPY_AND_ASSIGN(Class) private: Class(const Class&); Class& operator=(const Class&);

#include "stdafx.h"

class Context;

// Interfaces	
class IExpression
{
public:
	virtual void interpret(shared_ptr<Context> context) = 0;
	virtual ~IExpression(){};
};

