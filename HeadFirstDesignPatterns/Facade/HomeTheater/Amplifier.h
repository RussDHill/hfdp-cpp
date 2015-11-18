#pragma once

class Tuner;
class DvdPlayer;
class CdPlayer;

class Amplifier  
{
public:
	string toString() const;
	void setCd(shared_ptr<CdPlayer> cd);
	void setDvd(shared_ptr<DvdPlayer> dvd);
	void setTuner(shared_ptr<Tuner> tuner);
	void setVolume(int level);
	void setSurroundSound();
	void setStereoSound();
	void off();
	void on();
	Amplifier(const string& description);
	virtual ~Amplifier();
private:
	string amplifierDescription;
	shared_ptr<Tuner> tuner;
	shared_ptr<DvdPlayer> dvd;
	shared_ptr<CdPlayer> cd;

	Amplifier(const Amplifier&); 
	Amplifier& operator=(const Amplifier&);
};
