#include "stdafx.h"
#include "VeggiePizza.h"
#include "IFace.h"

VeggiePizza::VeggiePizza(shared_ptr<PizzaIngredientFactory> ingredientFactory)
	:veggiePizzaFactory(ingredientFactory)
{

}

VeggiePizza::~VeggiePizza()
{

}

void VeggiePizza::prepare()
{
	cout << "Preparing " << name << endl;
	dough = veggiePizzaFactory->createDough();
	sauce = veggiePizzaFactory->createSauce();
	cheese = veggiePizzaFactory->createCheese();
	veggiePizzaFactory->createVeggies(veggies);
	clam.reset();
	pepperoni.reset();
}
