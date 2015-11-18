#pragma once

class GarageDoor  
{
public:
	void lightOff();
	void lightOn();
	void stop();
	void down();
	void up();
	GarageDoor();
	virtual ~GarageDoor();
private: 
	GarageDoor(const GarageDoor&); 
	GarageDoor& operator=(const GarageDoor&);
};
