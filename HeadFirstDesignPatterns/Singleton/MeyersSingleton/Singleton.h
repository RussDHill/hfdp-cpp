#pragma once

class Singleton  
{
public:
	int getValue();
	void setValue(int in);
	static Singleton* getInstance();
protected:
	int value;
private:
	Singleton();
};
