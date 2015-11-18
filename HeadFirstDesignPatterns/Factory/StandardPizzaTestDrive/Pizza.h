#pragma once

class Pizza  
{
public:
	virtual string toString() const;
	virtual string getName() const;
	virtual void box();
	virtual void cut();
	virtual void bake();
	virtual void prepare();
	Pizza();
	virtual ~Pizza();
protected:
	string name;
	string dough;
	string sauce;
	vector<string> toppings;
private:
	Pizza(const Pizza&);
	Pizza& operator=(const Pizza&);
};
