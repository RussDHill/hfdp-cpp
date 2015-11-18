#pragma once

class Singleton  
{
public:
	int getValue();
	void setValue(int in);
	static Singleton* getInstance();
protected:
	static Singleton uniqueInstance;
	int value;
private:
	Singleton();
};
