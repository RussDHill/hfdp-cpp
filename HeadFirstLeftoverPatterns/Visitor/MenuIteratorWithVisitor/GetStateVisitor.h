#pragma once

#include "IFace.h"

class GetStateVisitor : public IVisitor  
{
public:
	void addCalories(string ingredient, float value);
	void addProtein(string ingredient, float value);
	void addCarbs(string ingredient, float value);
	virtual void visit(Ingredient* ingredient);
	virtual void visit(MenuItem* menuItem);
	virtual void visit(Menu* menu);
	GetStateVisitor();
	virtual ~GetStateVisitor();
private:
	float getCalories(MenuItem* menuItem);
	float getProtein(MenuItem* menuItem);
	float getCarbs(MenuItem* menuItem);	
	float getCalories(Ingredient* ingredient);
	float getProtein(Ingredient* ingredient);
	float getCarbs(Ingredient* ingredient);	
	map<string, float> calories;
	map<string, float> proteins;
	map<string, float> carbs;

	DISABLE_COPY_AND_ASSIGN(GetStateVisitor)
};
