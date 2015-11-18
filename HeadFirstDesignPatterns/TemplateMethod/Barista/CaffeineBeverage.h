#pragma once

class CaffeineBeverage  
{
public:
	void prepareRecipe();
	void boilWater();
	void pourInCup();
	virtual void brew() = 0;
	virtual void addCondiments() = 0;
	CaffeineBeverage();
	virtual ~CaffeineBeverage();
private:
	CaffeineBeverage(const CaffeineBeverage&);
	CaffeineBeverage& operator=(const CaffeineBeverage&);
};
