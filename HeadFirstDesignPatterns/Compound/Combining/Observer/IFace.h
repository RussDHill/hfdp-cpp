#pragma once

#define DISABLE_COPY_AND_ASSIGN(Class) private: Class(const Class&); Class& operator=(const Class&);

class QuackObservable;

// Interfaces	

class Observer
{
public:
	virtual void update(QuackObservable* duck) = 0;

	virtual ~Observer(){};
};

class QuackObservable
{
public:
	virtual void registerObserver(Observer* observer) = 0;
	virtual void notifyObservers() const = 0;
	virtual string toString() const = 0;
	virtual ~QuackObservable(){};
};

class Quackable : public QuackObservable
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

