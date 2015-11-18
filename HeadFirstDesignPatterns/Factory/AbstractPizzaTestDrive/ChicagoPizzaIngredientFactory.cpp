#include "stdafx.h"
#include "ChicagoPizzaIngredientFactory.h"
#include "ThickCrustDough.h"
#include "PlumTomatoSauce.h"
#include "MozzarellaCheese.h"
#include "SlicedPepperoni.h"
#include "FrozenClams.h"
#include "BlackOlives.h"
#include "Spinach.h"
#include "Eggplant.h"

ChicagoPizzaIngredientFactory::ChicagoPizzaIngredientFactory()
{

}

ChicagoPizzaIngredientFactory::~ChicagoPizzaIngredientFactory()
{

}

shared_ptr<Dough> ChicagoPizzaIngredientFactory::createDough()
{
	shared_ptr<Dough> dough(new ThickCrustDough());
	return  dough;
}

shared_ptr<Sauce> ChicagoPizzaIngredientFactory::createSauce()
{
	shared_ptr<Sauce> sauce(new PlumTomatoSauce());
	return  sauce;
}

shared_ptr<Cheese> ChicagoPizzaIngredientFactory::createCheese()
{
	shared_ptr<Cheese> cheese(new MozzarellaCheese());
	return cheese;
}

void ChicagoPizzaIngredientFactory::createVeggies(vector< shared_ptr<Veggies> >& veggies)
{
	shared_ptr<Veggies> veggie(new BlackOlives());
	veggies.push_back(veggie);
	veggie.reset(new Spinach());
	veggies.push_back(veggie);
	veggie.reset(new Eggplant());
	veggies.push_back(veggie);
}	

shared_ptr<Pepperoni> ChicagoPizzaIngredientFactory::createPepperoni()
{
	shared_ptr<Pepperoni> pepperoni(new SlicedPepperoni());
	return pepperoni;
}

shared_ptr<Clams> ChicagoPizzaIngredientFactory::createClams()
{
	shared_ptr<Clams> clams(new FrozenClams());
	return clams;
}
