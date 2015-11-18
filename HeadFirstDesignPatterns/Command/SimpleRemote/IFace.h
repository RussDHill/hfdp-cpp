#pragma once

#include "stdafx.h"

// Interfaces	
class Command
{
public:
	virtual void execute() = 0;
	virtual ~Command(){};
};


