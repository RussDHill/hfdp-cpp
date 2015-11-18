#include "stdafx.h"
#include "Stereo.h"

Stereo::Stereo(const string& location)
	:stereoLocation(location)
{

}

Stereo::~Stereo()
{

}

void Stereo::on() {
	cout << stereoLocation << " stereo is on" << endl;
}

void Stereo::off() {
	cout << stereoLocation << " stereo is off" << endl;
}

void Stereo::setCD() {
	cout << stereoLocation << " stereo is set for CD input" << endl;
}

void Stereo::setDVD() {
	cout << stereoLocation << " stereo is set for DVD input" << endl;
}

void Stereo::setRadio() {
	cout << stereoLocation << " stereo is set for Radio" << endl;
}

void Stereo::setVolume(int volume) {
	// code to set the volume
	// valid range: 1-11 (after all 11 is better than 10, right?)
	cout << stereoLocation << " stereo volume set to " << volume << endl;
}
