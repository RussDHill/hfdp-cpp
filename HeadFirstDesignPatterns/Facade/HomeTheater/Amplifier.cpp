#include "stdafx.h"
#include "Amplifier.h"
#include "DvdPlayer.h"
#include "CdPlayer.h"
#include "Tuner.h"

Amplifier::Amplifier(const string& description)
	:amplifierDescription(description)
{

}

Amplifier::~Amplifier()
{

}

void Amplifier::on()
{
	cout << amplifierDescription << " on" << endl;
}

void Amplifier::off()
{
	cout << amplifierDescription << " off" << endl;
}

void Amplifier::setStereoSound()
{
	cout << amplifierDescription << " stereo mode on" << endl;
}

void Amplifier::setSurroundSound()
{
	cout << amplifierDescription << " surround sound on (5 speakers, 1 subwoofer)" << endl;
}

void Amplifier::setVolume(int level)
{
	cout << amplifierDescription << " setting volume to " << level << endl;
}

void Amplifier::setTuner(shared_ptr<Tuner> tuner)
{
	cout << amplifierDescription << " setting tuner to " << tuner->toString() << endl;
	this->tuner.reset();
	this->tuner = tuner;
}
  
void Amplifier::setDvd(shared_ptr<DvdPlayer> dvd)
{
	cout << amplifierDescription << " setting DVD player to " << dvd->toString() << endl;
	this->dvd.reset();
	this->dvd = dvd;
}

void Amplifier::setCd(shared_ptr<CdPlayer> cd)
{
	cout << amplifierDescription << " setting CD player to " << cd->toString() << endl;
	this->cd.reset();
	this->cd = cd;
}

string Amplifier::toString() const
{
	return amplifierDescription;
}