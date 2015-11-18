#pragma once

class MenuItem  
{
public:
	static bool isNotVegetarian(shared_ptr<MenuItem> menuItem);
	string getName() const;
	string getDescription() const;
	double getPrice() const;
	bool isVegetarian() const;
	string toString() const;
	MenuItem(const string& name, const string& description, bool vegetarian, double price);
	virtual ~MenuItem();
	friend ostream& operator<<(ostream& s, const shared_ptr<MenuItem> item);
private:
	string itemName;
	string itemDescription;
	bool itemVegetarian;
	double itemPrice;

	MenuItem(const MenuItem&); 
	MenuItem& operator=(const MenuItem&);
};
