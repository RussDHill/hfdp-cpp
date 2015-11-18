#pragma once

class Dough;
class Sauce;
class Veggies;
class Cheese;
class Pepperoni;
class Clams;

class Pizza  
{
public:
	virtual string toString() const;
	virtual string getName() const;
	virtual void setName(const string& name);
	virtual void box();
	virtual void cut();
	virtual void bake();
	virtual void prepare() = 0;
	Pizza();
	virtual ~Pizza();
protected:
	string name;
	shared_ptr<Dough> dough;
	shared_ptr<Sauce> sauce;
	vector< shared_ptr<Veggies> > veggies;
	shared_ptr<Cheese> cheese;
	shared_ptr<Pepperoni> pepperoni;
	shared_ptr<Clams> clam;
private: 
	Pizza(const Pizza&); 
	Pizza& operator=(const Pizza&);
};
