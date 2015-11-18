#pragma once

class TheaterLights  
{
public:
	string toString() const;
	void dim(int level);
	void off();
	void on();
	TheaterLights(const string& description);
	virtual ~TheaterLights();
private:
	string lightsDescription;

	TheaterLights(const TheaterLights&); 
	TheaterLights& operator=(const TheaterLights&);
};
