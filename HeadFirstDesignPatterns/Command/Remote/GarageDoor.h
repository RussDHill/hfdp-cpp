#pragma once

class GarageDoor  
{
public:
	void lightOff();
	void lightOn();
	void stop();
	void down();
	void up();
	GarageDoor(const string& location);
	virtual ~GarageDoor();
private:
	string garageDoorLocation;
};

