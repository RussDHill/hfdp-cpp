#include "stdafx.h"
#include "ClamPizza.h"
#include "IFace.h"

ClamPizza::ClamPizza(shared_ptr<PizzaIngredientFactory> ingredientFactory)
	:clamPizzaFactory(ingredientFactory)
{

}

ClamPizza::~ClamPizza()
{

}

void ClamPizza::prepare()
{
	cout << "Preparing " << name << endl;
	dough = clamPizzaFactory->createDough();
	sauce = clamPizzaFactory->createSauce();
	cheese = clamPizzaFactory->createCheese();
	clam = clamPizzaFactory->createClams();
	pepperoni.reset();
}
