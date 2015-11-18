#pragma once

class Pizza;

class PizzaStore  
{
public:
	shared_ptr<Pizza> orderPizza(const string& type);
	PizzaStore();
	virtual ~PizzaStore();
protected:
	virtual shared_ptr<Pizza> createPizza(const string& item) = 0;
private: 
	PizzaStore(const PizzaStore&); 
	PizzaStore& operator=(const PizzaStore&);
};
