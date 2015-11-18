#pragma once

#define DISABLE_COPY_AND_ASSIGN(Class) private: Class(const Class&); Class& operator=(const Class&);

// Interfaces	
class Quackable
{
public:
	virtual void quack() const = 0;
	virtual ~Quackable(){};
};

class AbstractDuckFactory
{
public:
	virtual shared_ptr<Quackable> createMallardDuck() = 0;
	virtual shared_ptr<Quackable> createRedheadDuck() = 0;
	virtual shared_ptr<Quackable> createDuckCall() = 0;
	virtual shared_ptr<Quackable> createRubberDuck() = 0;

	virtual ~AbstractDuckFactory(){};
};


