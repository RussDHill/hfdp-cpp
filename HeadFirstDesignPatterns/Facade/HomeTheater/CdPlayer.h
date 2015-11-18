#pragma once

#include "Amplifier.h"

class Amplifier;

class CdPlayer  
{
public:
	string toString() const;
	void pause();
	void stop();
	void play(int track);
	void play(const string& title);
	void eject();
	void off();
	void on();
	CdPlayer(const string& description, shared_ptr<Amplifier> amplifier);
	virtual ~CdPlayer();
private:
	string cdPlayerDescription;
	int currentTrack;
	weak_ptr<Amplifier> cdPlayerAmplifier;
	string title;

	CdPlayer(const CdPlayer&); 
	CdPlayer& operator=(const CdPlayer&);
};
