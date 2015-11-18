#pragma once

#define DISABLE_COPY_AND_ASSIGN(Class) private: Class(const Class&); Class& operator=(const Class&);

// Interfaces
class FlyBehavior
{
public:
	virtual void fly() = 0;
	virtual ~FlyBehavior(){};
};

class QuackBehavior
{
public:
	virtual void quack() = 0;
	virtual ~QuackBehavior(){};
};


