#pragma once

class Light  
{
public:
	void off();
	void on();
	Light(const string& location);
	virtual ~Light();
private:
	string lightLocation;
};
