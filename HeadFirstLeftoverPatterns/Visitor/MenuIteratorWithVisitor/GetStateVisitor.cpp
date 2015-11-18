#include "stdafx.h"
#include "GetStateVisitor.h"
#include "Menu.h"
#include "MenuItem.h"
#include "Ingredient.h"

GetStateVisitor::GetStateVisitor()
{

}

GetStateVisitor::~GetStateVisitor()
{

}

void GetStateVisitor::visit(Ingredient* ingredient)
{
	cout << setprecision(1) << fixed << ingredient->getName() << ", " << getCalories(ingredient);
	cout << " g, " << getProtein(ingredient) << " g, " << getCarbs(ingredient) << " g " << endl;
}
		
void GetStateVisitor::visit(MenuItem* menuItem)
{
	cout << setprecision(1) << fixed << menuItem->getName() << ", " << getCalories(menuItem);
	cout << " g, " << getProtein(menuItem) << " g, " << getCarbs(menuItem) << " g, made with following: " << endl;
}

void GetStateVisitor::visit(Menu* menu)
{
	cout << endl << menu->getName() << endl;
}
	
void GetStateVisitor::addCalories(string ingredient, float value) 
{ 
	calories.insert(make_pair(ingredient, value)); 
}
	
void GetStateVisitor::addProtein(string ingredient, float value) 
{ 
	proteins.insert(make_pair(ingredient, value)); 
}
	
void GetStateVisitor::addCarbs(string ingredient, float value) 
{ 
	carbs.insert(make_pair(ingredient, value)); 
}
	
float GetStateVisitor::getCalories(Ingredient* ingredient) 
{ 
	return calories.find(ingredient->getName())->second; 
}
	
float GetStateVisitor::getProtein(Ingredient* ingredient) 
{ 
	return proteins.find(ingredient->getName())->second; 
}
	
float GetStateVisitor::getCarbs(Ingredient* ingredient) 
{ 
	return carbs.find(ingredient->getName())->second; 
}
	
float GetStateVisitor::getCalories(MenuItem* menuItem) 
{ 
	float calorieValue = 0;

	vector< shared_ptr<MenuComponent> > menuComponents;
	menuItem->getMenuComponents(menuComponents);

	vector< shared_ptr<MenuComponent> >::iterator itr;
	for (itr=menuComponents.begin();itr!=menuComponents.end();++itr) {
		map<string, float>::iterator it;
		it = calories.find((*itr)->getName());
		if (it != calories.end()) {
			calorieValue += it->second;
		}
	}

	return calorieValue; 
}
	
float GetStateVisitor::getProtein(MenuItem* menuItem) 
{ 
	float proteinValue = 0;

	vector< shared_ptr<MenuComponent> > menuComponents;
	menuItem->getMenuComponents(menuComponents);

	vector< shared_ptr<MenuComponent> >::iterator itr;
	for (itr=menuComponents.begin();itr!=menuComponents.end();++itr) {
		map<string, float>::iterator it;
		it = proteins.find((*itr)->getName());
		if (it != proteins.end()) {
			proteinValue += it->second;
		}
	}

	return proteinValue; 
}
	
float GetStateVisitor::getCarbs(MenuItem* menuItem) 
{ 
	float carbValue = 0;

	vector< shared_ptr<MenuComponent> > menuComponents;
	menuItem->getMenuComponents(menuComponents);

	vector< shared_ptr<MenuComponent> >::iterator itr;
	for (itr=menuComponents.begin();itr!=menuComponents.end();++itr) {
		map<string, float>::iterator it;
		it = carbs.find((*itr)->getName());
		if (it != carbs.end()) {
			carbValue += it->second;
		}
	}

	return carbValue; 
}
