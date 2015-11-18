#pragma once

class Pizza;
class SimplePizzaFactory;

class PizzaStore  
{
public:
	shared_ptr<Pizza> orderPizza(const string& type) const;
	PizzaStore(shared_ptr<SimplePizzaFactory> factory);
	virtual ~PizzaStore();
private:
	shared_ptr<SimplePizzaFactory> pizzaStoreFactory;
};
