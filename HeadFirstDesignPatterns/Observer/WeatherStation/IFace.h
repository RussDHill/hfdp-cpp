#pragma once

#define DISABLE_COPY_AND_ASSIGN(Class) private: Class(const Class&); Class& operator=(const Class&);

// Interfaces
class DisplayElement
{
public:
	virtual void display() = 0;
	virtual ~DisplayElement(){};
};

class Observer
{
public:
	virtual void update(float temperature, float humidity, float pressure) = 0;
	virtual ~Observer(){};
};

class Subject
{
public:
	virtual void registerObserver(Observer* o) = 0;
	virtual void removeObserver(Observer* o) = 0;
	virtual void notifyObservers() = 0;
	virtual ~Subject(){};
};

