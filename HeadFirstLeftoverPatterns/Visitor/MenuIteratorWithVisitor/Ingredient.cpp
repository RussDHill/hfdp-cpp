#include "stdafx.h"
#include "Ingredient.h"

Ingredient::Ingredient(string name, string description)
	:ingredientName(name), ingredientDescription(description)
{

}

Ingredient::~Ingredient()
{

}

string Ingredient::getName()
{
	return ingredientName;
}

string Ingredient::getDescription()
{
	return ingredientDescription;
}

void Ingredient::print()
{
	cout << getDescription();
}

void Ingredient::accept(IVisitor& visitor)
{
	visitor.visit(this);
}

void Ingredient::getMenuComponents(vector< shared_ptr<MenuComponent> > &vec)
{
	vec.push_back(this->shared_from_this());
}
