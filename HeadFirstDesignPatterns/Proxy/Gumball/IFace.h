#pragma once

#define DISABLE_COPY_AND_ASSIGN(Class) private: Class(const Class&); Class& operator=(const Class&);

#include <string>
using std::string;

// Interface
class State
{
public:
	virtual string toString()  const { return "unknown state"; }
	virtual void insertQuarter() = 0;
	virtual void ejectQuarter() = 0;
	virtual void turnCrank() = 0;
	virtual void dispense() = 0;
	virtual ~State() {}
};
