#pragma once

class Light  
{
public:
	int getLevel();
	void dim(int level);
	void off();
	void on();
	Light(const string& location);
	virtual ~Light();
private:
	string lightLocation;
	int level;

	Light(const Light&); 
	Light& operator=(const Light&);
};
