#pragma once

class ChocolateBoiler  
{
public:
	bool isBoiled();
	bool isEmpty();
	void boil();
	void drain();
	void fill();
	static shared_ptr<ChocolateBoiler>& getInstance();
private:
	static shared_ptr<ChocolateBoiler> uniqueInstance;
	bool boiled;
	bool empty;
	bool destroy();
	virtual ~ChocolateBoiler();
	ChocolateBoiler();
};
