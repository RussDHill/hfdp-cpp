#pragma once

#define HIGH	3
#define MEDIUM	2
#define LOW		1
#define OFF		0

class CeilingFan  
{
public:
	void high();
	void medium();
	void low();
	void off();
	int getSpeed();
	CeilingFan();
	CeilingFan(const string& location);
	virtual ~CeilingFan();
private:
	string fanLocation;
	int level;

	CeilingFan(const CeilingFan&); 
	CeilingFan& operator=(const CeilingFan&);
};

