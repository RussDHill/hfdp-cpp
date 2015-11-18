#pragma once

#define DISABLE_COPY_AND_ASSIGN(Class) private: Class(const Class&); Class& operator=(const Class&);


#include "stdafx.h"

// Interfaces	
class Duck
{
public:
	virtual void quack() = 0;
	virtual void fly() = 0;
	virtual ~Duck() = 0 {}
};

class Turkey
{
public:
	virtual void gobble() = 0;
	virtual void fly() = 0;
	virtual ~Turkey() = 0 {}
};

