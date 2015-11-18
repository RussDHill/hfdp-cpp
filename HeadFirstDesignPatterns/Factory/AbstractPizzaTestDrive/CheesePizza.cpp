#include "stdafx.h"
#include "CheesePizza.h"
#include "IFace.h"

CheesePizza::CheesePizza(shared_ptr<PizzaIngredientFactory> ingredientFactory)
	:cheesePizzaFactory(ingredientFactory)
{

}

CheesePizza::~CheesePizza()
{

}

void CheesePizza::prepare()
{
	cout << "Preparing " << name << endl;
	dough = cheesePizzaFactory->createDough();
	sauce = cheesePizzaFactory->createSauce();
	cheese = cheesePizzaFactory->createCheese();
	clam.reset();
	pepperoni.reset();
}
