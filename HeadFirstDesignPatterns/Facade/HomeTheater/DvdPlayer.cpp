#include "stdafx.h"
#include "DvdPlayer.h"


DvdPlayer::DvdPlayer(const string& description, shared_ptr<Amplifier> amplifier) 
	:dvdPlayerDescription(description), dvdPlayerAmplifier(amplifier)
{

}

DvdPlayer::~DvdPlayer()
{

}

void DvdPlayer::on()
{
	cout << dvdPlayerDescription << " on" << endl;
}

void DvdPlayer::off()
{
	cout << dvdPlayerDescription << " off" << endl;
}

void DvdPlayer::eject()
{
	movie = "";
	cout << dvdPlayerDescription << " eject" << endl;
}

void DvdPlayer::play(const string& movie)
{
	this->movie = movie;
	currentTrack = 0;
	cout << dvdPlayerDescription << " playing \"" << movie << "\"" << endl;
}

void DvdPlayer::play(int track)
{
	if (movie == "") {
		cout << dvdPlayerDescription << " can't play track " << track << ", no dvd inserted" << endl;
	} else {
		currentTrack = track;
		cout << dvdPlayerDescription << " playing track \" " << track << " of \"" << movie << "\"" << endl;
	}
}

void DvdPlayer::stop()
{
	currentTrack = 0;
	cout << dvdPlayerDescription << " stopped \"" << movie << "\"" << endl;
}

void DvdPlayer::pause()
{
	cout << dvdPlayerDescription << " paused \" " << movie << "\"" << endl;
}

void DvdPlayer::setTwoChannelAudio()
{
	cout << dvdPlayerDescription << " set two channel audio" << endl;
}

void DvdPlayer::setSurroundAudio()
{
	cout << dvdPlayerDescription << " set surround audio" << endl;
}

string DvdPlayer::toString() const
{
	return dvdPlayerDescription;
}
