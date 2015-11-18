#pragma once

class Pizza;

class PizzaStore  
{
public:
	PizzaStore();
	virtual ~PizzaStore();
	shared_ptr<Pizza> orderPizza(const string& type);
	virtual shared_ptr<Pizza> createPizza(const string& item) = 0;
private:
	PizzaStore(const PizzaStore&);
	PizzaStore& operator=(const PizzaStore&);
};
