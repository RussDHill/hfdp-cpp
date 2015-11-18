// MenuTestDrive.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MenuComponent.h"
#include "Menu.h"
#include "MenuItem.h"
#include "Ingredient.h"
#include "Waitress.h"

int main(int argc, char* argv[])
{
	shared_ptr<MenuComponent> pancakeHouseMenu(new Menu("PANCAKE HOUSE MENU", "Breakfast"));
	shared_ptr<MenuComponent> dinerMenu(new Menu("DINER MENU", "Lunch"));
	shared_ptr<MenuComponent> cafeMenu(new Menu("CAFE MENU", "Dinner"));
	shared_ptr<MenuComponent> dessertMenu(new Menu("DESSERT MENU", "Dessert of course!"));
	shared_ptr<MenuComponent> coffeeMenu(new Menu("COFFEE MENU", "Stuff to go with your afternoon coffee"));

	shared_ptr<MenuComponent> allMenus(new Menu("ALL MENUS", "All menus combined"));

	allMenus->add(pancakeHouseMenu);
	allMenus->add(dinerMenu);
	allMenus->add(cafeMenu);

	vector< shared_ptr<MenuComponent> > ingredients;
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Pancake", "Pancakes with ")));
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Egg", "scrambled eggs, and ")));
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Toast", "toast")));

	pancakeHouseMenu->add(shared_ptr<MenuComponent>(new MenuItem(
		"K&B's Pancake Breakfast", 
		ingredients, 
		true,
		2.99)));

	ingredients.clear();
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Pancake", "Pancakes with ")));
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Egg", "fried eggs, ")));
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Sausage", "sausage")));

	pancakeHouseMenu->add(shared_ptr<MenuComponent>(new MenuItem(
		"Regular Pancake Breakfast", 
		ingredients, 
		false,
		2.99)));

	ingredients.clear();
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Pancake", "Pancakes made with fresh ")));
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Blueberries", "blueberries, and ")));
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Blueberry Syrup", "blueberry syrup")));

	pancakeHouseMenu->add(shared_ptr<MenuComponent>(new MenuItem(
		"Blueberry Pancakes",
		ingredients, 
		true,
		3.49)));

	ingredients.clear();
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Waffles", "Waffles, with your choice of ")));
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Blueberries", "blueberries or strawberries")));

	pancakeHouseMenu->add(shared_ptr<MenuComponent>(new MenuItem(
		"Waffles with Berries",
		ingredients, 
		true,
		3.59)));

	ingredients.clear();
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Tofu", "(Fakin') Bacon with ")));
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Lettuce", "lettuce & ")));
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Tomato", "tomato on ")));
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Bread", "whole wheat")));

	dinerMenu->add(shared_ptr<MenuComponent>(new MenuItem(
		"Vegetarian BLT",
		ingredients, 
		true, 
		2.99)));

	ingredients.clear();
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Bacon", "Bacon with ")));
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Lettuce", "lettuce & ")));
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Tomato", "tomato on ")));
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Bread", "whole wheat")));

	dinerMenu->add(shared_ptr<MenuComponent>(new MenuItem(
		"BLT",
		ingredients, 
		false, 
		2.99)));

	ingredients.clear();
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Soup", "A bowl of the soup of the day, with a side of ")));
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Potato Salad", "potato salad")));

	dinerMenu->add(shared_ptr<MenuComponent>(new MenuItem(
		"Soup of the day",
		ingredients, 
		false, 
		3.29)));

	ingredients.clear();
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Hotdog", "A hot dog, with ")));
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Saurkraut", "saurkraut, ")));
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Relish", "relish, ")));
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Onions", "onions, topped with ")));
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Cheese", "cheese")));

	dinerMenu->add(shared_ptr<MenuComponent>(new MenuItem(
		"Hotdog Roll",
		ingredients, 
		false, 
		3.05)));

	ingredients.clear();
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Vegetables", "Steamed vegetables over ")));
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Brown Rice", "brown rice")));

	dinerMenu->add(shared_ptr<MenuComponent>(new MenuItem(
		"Steamed Veggies and Brown Rice",
		ingredients, 
		true, 
		3.99)));

	ingredients.clear();
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Spaghetti", "Spaghetti with ")));
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Marinara Sauce", "Marinara Sauce, and a ")));
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Sourdough Bread", "slice of sourdough bread")));

	dinerMenu->add(shared_ptr<MenuComponent>(new MenuItem(
		"Pasta",
		ingredients, 
		true, 
		3.89)));

	dinerMenu->add(dessertMenu);

	ingredients.clear();
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Apple Pie", "Apple pie with a flakey crust, ")));
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Vanilla Icecream", "topped with vanilla icecream")));

	dessertMenu->add(shared_ptr<MenuComponent>(new MenuItem(
		"Flakey Crust Apple Pie",
		ingredients, 
		true,
		1.59)));

	ingredients.clear();
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Cheesecake", "Creamy New York cheesecake, with a chocolate graham crust")));

	dessertMenu->add(shared_ptr<MenuComponent>(new MenuItem(
		"New York Cheesecake",
		ingredients, 
		true,
		1.99)));

	ingredients.clear();
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Raspberry Sorbet", "A scoop of raspberry and ")));
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Lime Sorbet", "a scoop of lime")));

	dessertMenu->add(shared_ptr<MenuComponent>(new MenuItem(
		"Sorbet",
		ingredients, 
		true,
		1.89)));

	ingredients.clear();
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Veggie Burger", "Veggie burger on a ")));
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Whole Wheat Bun", "whole wheat bun, ")));
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Lettuce", "lettuce, ")));
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Tomato", "tomato, and ")));
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Fries", "fries")));

	cafeMenu->add(shared_ptr<MenuComponent>(new MenuItem(
		"Veggie Burger and Air Fries",
		ingredients, 
		true, 
		3.99)));

	ingredients.clear();
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Soup", "A cup of the soup of the day, with a side ")));
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Salad", "salad")));

	cafeMenu->add(shared_ptr<MenuComponent>(new MenuItem(
		"Soup of the day",
		ingredients, 
		false, 
		3.69)));

	ingredients.clear();
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Burrito", "A large burrito, ")));
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Pinto Beans", "with whole pinto beans, ")));
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Salsa", "salsa, ")));
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Guacamole", "guacamole")));

	cafeMenu->add(shared_ptr<MenuComponent>(new MenuItem(
		"Large Burrito",
		ingredients, 
		true, 
		4.29)));

	cafeMenu->add(coffeeMenu);

	ingredients.clear();
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Coffee Cake", "Crumbly cake topped with cinnamon and walnuts")));

	coffeeMenu->add(shared_ptr<MenuComponent>(new MenuItem(
		"Crumbly Coffee Cake",
		ingredients, 
		true,
		1.59)));

	ingredients.clear();
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Bagel", "Flavors include sesame, poppyseed, cinnamon raisin, pumpkin")));

	coffeeMenu->add(shared_ptr<MenuComponent>(new MenuItem(
		"Your Choice Bagel",
		ingredients, 
		false,
		0.69)));

	ingredients.clear();
	ingredients.push_back(shared_ptr<MenuComponent>(new Ingredient("Biscotti", "Three almond or hazelnut biscotti cookies")));

	coffeeMenu->add(shared_ptr<MenuComponent>(new MenuItem(
		"Nut Biscotti",
		ingredients, 
		true,
		0.89)));

	shared_ptr<Waitress> waitress(new Waitress(allMenus));
   
	waitress->addIngredientInfo("Pancake", 92, 2, 17);
	waitress->addIngredientInfo("Egg", 90, 6, 0);
	waitress->addIngredientInfo("Toast", 76, 4, 13);
	waitress->addIngredientInfo("Sausage", 95, 5, 0);
	waitress->addIngredientInfo("Blueberries", 186, 1, 50);
	waitress->addIngredientInfo("Blueberry Syrup", 155, 1, 40);
	waitress->addIngredientInfo("Waffles", 103, 2, 16);
	waitress->addIngredientInfo("Tofu", 33, 2, 1);
	waitress->addIngredientInfo("Lettuce", 10, 1, 2);
	waitress->addIngredientInfo("Tomato", 22, 1, 5);
	waitress->addIngredientInfo("Bread", 76, 4, 13);
	waitress->addIngredientInfo("Bacon", 87, 11, 1);
	waitress->addIngredientInfo("Soup", 128, 2.3f, 14.8f);
	waitress->addIngredientInfo("Potato Salad", 357, 7, 28);
	waitress->addIngredientInfo("Hotdog", 147, 5, 1);
	waitress->addIngredientInfo("Saurkraut", 22, 1, 5);
	waitress->addIngredientInfo("Relish", 22, 1, 5);
	waitress->addIngredientInfo("Onions", 35, 0, 2);
	waitress->addIngredientInfo("Cheese", 113, 7, 0);
	waitress->addIngredientInfo("Vegetables", 165, 8, 36);
	waitress->addIngredientInfo("Brown Rice", 216, 5, 45);
	waitress->addIngredientInfo("Spaghetti", 220, 8, 43);
	waitress->addIngredientInfo("Marinara Sauce", 15, 0, 4);
	waitress->addIngredientInfo("Sourdough Bread", 210, 8, 41);
	waitress->addIngredientInfo("Apple Pie", 260, 3, 34);
	waitress->addIngredientInfo("Vanilla Icecream", 150, 4, 23);
	waitress->addIngredientInfo("Cheesecake", 257, 4, 20);
	waitress->addIngredientInfo("Raspberry Sorbet", 197, 0, 51);
	waitress->addIngredientInfo("Lime Sorbet", 197, 0, 51);
	waitress->addIngredientInfo("Veggie Burger", 124, 11, 10);
	waitress->addIngredientInfo("Whole Wheat Bun", 76, 4, 13);
	waitress->addIngredientInfo("Fries", 209, 3, 26);
	waitress->addIngredientInfo("Salad", 15, 1, 3);
	waitress->addIngredientInfo("Burrito", 257, 10, 34);
	waitress->addIngredientInfo("Pinto Beans", 190, 4, 37);
	waitress->addIngredientInfo("Salsa", 35, 2, 8);
	waitress->addIngredientInfo("Guacamole", 164, 2, 8);
	waitress->addIngredientInfo("Coffee Cake", 570, 7, 75);
	waitress->addIngredientInfo("Bagel", 260, 9, 54);
	waitress->addIngredientInfo("Biscotti", 110, 2, 15);

	//waitress->printMenu();
	//waitress->printVegetarianMenu();
	waitress->printNutritionalMenu();

	cout << endl;

	return 0;
}
