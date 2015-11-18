#include "stdafx.h"
#include "PepperoniPizza.h"
#include "IFace.h"

PepperoniPizza::PepperoniPizza(shared_ptr<PizzaIngredientFactory> ingredientFactory )
	:pepperoniPizzaFactory(ingredientFactory )
{

}

 PepperoniPizza::~ PepperoniPizza()
{

}

void  PepperoniPizza::prepare()
{
	cout << "Preparing " << name << endl;
	dough = pepperoniPizzaFactory->createDough();
	sauce = pepperoniPizzaFactory->createSauce();
	cheese = pepperoniPizzaFactory->createCheese();
	pepperoniPizzaFactory->createVeggies(veggies);
	pepperoni = pepperoniPizzaFactory->createPepperoni();
	clam.reset();
}
