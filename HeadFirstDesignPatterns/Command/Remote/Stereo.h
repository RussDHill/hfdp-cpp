#pragma once

class Stereo  
{
public:
	void on();
	void off();
	void setCD();
	void setDVD();
	void setRadio();
	void setVolume(int volume);
	Stereo(const string& location);
	virtual ~Stereo();
private:
	string stereoLocation;

	Stereo(const Stereo&); 
	Stereo& operator=(const Stereo&);
};
