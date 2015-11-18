#pragma once

class MenuItem  
{
public:
	static void setSize(int sizeIn);
	static int getSize();
	string getName();
	string getDescription();
	double getPrice();
	bool isVegetarian();
	string toString();
	MenuItem(string name, string description, bool vegetarian, double price);
	MenuItem();
	virtual ~MenuItem();
private:
	static int size;
	string name;
	string description;
	bool vegetarian;
	double price;
};
