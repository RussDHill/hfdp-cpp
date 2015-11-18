#pragma once

#include "Amplifier.h"

class Amplifier;

class DvdPlayer  
{
public:
	string toString() const;
	void setSurroundAudio();
	void setTwoChannelAudio();
	void pause();
	void stop();
	void play(int track);
	void play(const string& title);
	void eject();
	void off();
	void on();
	DvdPlayer(const string& description, shared_ptr<Amplifier> amplifier);
	virtual ~DvdPlayer();
private:
	string dvdPlayerDescription;
	int currentTrack;
	weak_ptr<Amplifier> dvdPlayerAmplifier;
	string movie;

	DvdPlayer(const DvdPlayer&); 
	DvdPlayer& operator=(const DvdPlayer&);
};
