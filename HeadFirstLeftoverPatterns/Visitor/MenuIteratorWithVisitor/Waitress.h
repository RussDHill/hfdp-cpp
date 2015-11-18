#pragma once

#include "GetStateVisitor.h"

class MenuComponent;

class Waitress  
{
public:
	void printNutritionalMenu();
	void addIngredientInfo(string ingredient, float calories, float protein, float carbs);
	void Waitress::printVegetarianMenu();
	void printMenu();
	Waitress(shared_ptr<MenuComponent> allMenu);
	Waitress();
	virtual ~Waitress();
private:
	shared_ptr<MenuComponent> waitressMenus;
	GetStateVisitor visitor;
};
