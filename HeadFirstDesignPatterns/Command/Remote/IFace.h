#pragma once

#define DISABLE_COPY_AND_ASSIGN(Class) private: Class(const Class&); Class& operator=(const Class&);

#include "stdafx.h"

// Interfaces	
class Command
{
public:
	virtual void execute() = 0;
	virtual ~Command() {};
};
