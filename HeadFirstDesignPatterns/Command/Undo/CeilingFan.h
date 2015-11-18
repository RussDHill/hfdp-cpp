#pragma once

class CeilingFan  
{
public:
	static const int HIGH = 3;
	static const int MEDIUM = 2;
	static const int LOW = 1;
	static const int OFF = 0;
	void high();
	void medium();
	void low();
	void off();
	int getSpeed();
	CeilingFan(const string& location);
	virtual ~CeilingFan();
private:
	string fanLocation;
	int level;

	CeilingFan(const CeilingFan&); 
	CeilingFan& operator=(const CeilingFan&);
};
