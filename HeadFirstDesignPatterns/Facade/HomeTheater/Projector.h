#pragma once

class DvdPlayer;

class Projector  
{
public:
	string toString() const;
	void tvMode();
	void wideScreenMode();
	void off();
	void on();
	Projector(const string& description, shared_ptr<DvdPlayer> dvdPlayer);
	virtual ~Projector();
private:
	string projectorDescription;
	shared_ptr<DvdPlayer> projectorDvdPlayer;

	Projector(const Projector&); 
	Projector& operator=(const Projector&);
};
