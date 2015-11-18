#pragma once

#include "IFace.h"

class Observable : public QuackObservable  
{
public:
	virtual string toString() const;
	virtual void registerObserver(Observer* observer);
	virtual void notifyObservers() const;
	Observable(QuackObservable* duck);
	virtual ~Observable();
private:
	QuackObservable* observableDuck;
	list<class Observer*> observers;

	DISABLE_COPY_AND_ASSIGN(Observable)
};

