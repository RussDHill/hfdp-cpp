#pragma once

#define DISABLE_COPY_AND_ASSIGN(Class) private: Class(const Class&); Class& operator=(const Class&);

#include "stdafx.h"

// Interfaces	
class Veggies
{
public:
	virtual string toString() const = 0;
	virtual ~Veggies(){};
};

class Pepperoni
{
public:
	virtual string toString() const = 0;
	virtual ~Pepperoni(){};
};

class Sauce
{
public:
	virtual string toString() const = 0;
	virtual ~Sauce(){};
};

class Cheese
{
public:
	virtual string toString() const = 0;
	virtual ~Cheese(){};
};

class Clams
{
public:
	virtual string toString() const = 0;
	virtual ~Clams(){};
};

class Dough
{
public:
	virtual string toString() const = 0;
	virtual ~Dough(){};
};

class PizzaIngredientFactory
{
public:
	virtual shared_ptr<Dough> createDough() = 0;
	virtual shared_ptr<Sauce> createSauce() = 0;
	virtual shared_ptr<Cheese> createCheese() = 0;
	virtual void createVeggies(vector< shared_ptr<Veggies> >& veggies) = 0;
	virtual shared_ptr<Pepperoni> createPepperoni() = 0;
	virtual shared_ptr<Clams> createClams() = 0;
	virtual ~PizzaIngredientFactory(){};
};

