#include "stdafx.h"
#include "Waitress.h"
#include "CompositeIterator.h"
#include "MenuItem.h"
#include "IFace.h"

Waitress::Waitress(shared_ptr<MenuComponent> allMenus)
	:waitressMenus(allMenus)
{

}

Waitress::Waitress()
{

}

Waitress::~Waitress()
{

}

void Waitress::printMenu()
{
	waitressMenus->print();
}

void Waitress::printVegetarianMenu()
{
	vector< shared_ptr<MenuComponent> > menuComponents;

	waitressMenus->getMenuComponents(menuComponents);

	cout << endl << "VEGETARIAN MENU" << endl << "----" << endl;
	vector< shared_ptr<MenuComponent> >::iterator itr;
	for (itr=menuComponents.begin();itr!=menuComponents.end();++itr) {
		if ((*itr)->isVegetarian()) {
			(*itr)->print();
		}
	}
}

void Waitress::addIngredientInfo(string ingredient, float calories, float protein, float carbs)
{
	visitor.addCalories(ingredient, calories);
	visitor.addProtein(ingredient, protein);
	visitor.addCarbs(ingredient, carbs);
}

void Waitress::printNutritionalMenu()
{
	vector< shared_ptr<MenuComponent> > menuComponents;

	waitressMenus->getAllMenuComponents(menuComponents);

	cout << endl << "NUTRITIONAL MENU, Calories, Protein, Carbs" << endl << "----" << endl;
	vector< shared_ptr<MenuComponent> >::iterator itr;
	for (itr=menuComponents.begin();itr!=menuComponents.end();++itr) {
		(*itr)->accept(visitor);
	}
}
