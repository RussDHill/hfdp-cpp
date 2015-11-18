#pragma once

class CaffeineBeverageWithHook  
{
public:
	virtual bool customerWantsCondiments() const;
	void prepareRecipe();
	void boilWater();
	void pourInCup();
	virtual void brew() = 0;
	virtual void addCondiments() = 0;
	CaffeineBeverageWithHook();
	virtual ~CaffeineBeverageWithHook();
private:
	CaffeineBeverageWithHook(const CaffeineBeverageWithHook&);
	CaffeineBeverageWithHook& operator=(const CaffeineBeverageWithHook&);
};
