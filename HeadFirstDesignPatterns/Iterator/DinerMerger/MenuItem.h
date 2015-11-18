#pragma once

class MenuItem  
{
public:
	string getName() const;
	string getDescription() const;
	double getPrice() const;
	bool isVegetarian() const;
	string toString() const;
	MenuItem(const string& name, const string& description, bool vegetarian, double price);
	virtual ~MenuItem();
private:
	string itemName;
	string itemDescription;
	bool itemVegetarian;
	double itemPrice;

	MenuItem(const MenuItem&);
	MenuItem& operator=(const MenuItem&);
};
