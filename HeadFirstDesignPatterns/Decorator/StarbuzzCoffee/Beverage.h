#pragma once

class Beverage  
{
public:
	virtual double cost() const = 0;
	virtual string getDescription() const;
	Beverage();
	virtual ~Beverage();
protected:
	string description;
private:
	Beverage(const Beverage&);
	Beverage& operator=(const Beverage&);
};
