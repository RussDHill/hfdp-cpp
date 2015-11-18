#include "stdafx.h"
#include "NYPizzaIngredientFactory.h"
#include "ThinCrustDough.h"
#include "MarinaraSauce.h"
#include "ReggianoCheese.h"
#include "SlicedPepperoni.h"
#include "FreshClams.h"
#include "Garlic.h"
#include "Onion.h"
#include "Mushroom.h"
#include "RedPepper.h"

NYPizzaIngredientFactory::NYPizzaIngredientFactory()
{

}

NYPizzaIngredientFactory::~NYPizzaIngredientFactory()
{

}

shared_ptr<Dough> NYPizzaIngredientFactory::createDough()
{
	shared_ptr<Dough> dough(new ThinCrustDough());
	return dough;
}

shared_ptr<Sauce> NYPizzaIngredientFactory::createSauce()
{
	shared_ptr<Sauce> sauce(new MarinaraSauce());
	return sauce;
}

shared_ptr<Cheese> NYPizzaIngredientFactory::createCheese()
{
	shared_ptr<Cheese> cheese(new ReggianoCheese());
	return cheese;
}

void NYPizzaIngredientFactory::createVeggies(vector< shared_ptr<Veggies> >& veggies)
{
	shared_ptr<Veggies> veggie(new Garlic());
	veggies.push_back(veggie);
	veggie.reset(new Onion());
	veggies.push_back(veggie);
	veggie.reset(new Mushroom());
	veggies.push_back(veggie);
	veggie.reset(new RedPepper());
	veggies.push_back(veggie);
}	

shared_ptr<Pepperoni> NYPizzaIngredientFactory::createPepperoni()
{
	shared_ptr<Pepperoni> pepperoni(new SlicedPepperoni());
	return pepperoni;
}

shared_ptr<Clams> NYPizzaIngredientFactory::createClams()
{
	shared_ptr<Clams> clams(new FreshClams());
	return clams;
}
