#include "stdafx.h"
#include "CdPlayer.h"
#include "Amplifier.h"


CdPlayer::CdPlayer(const string& description, shared_ptr<Amplifier> amplifier) 
	:cdPlayerDescription(description), cdPlayerAmplifier(amplifier)
{

}

CdPlayer::~CdPlayer()
{

}

void CdPlayer::on()
{
	cout << cdPlayerDescription << " on" << endl;
}

void CdPlayer::off()
{
	cout << cdPlayerDescription << " off" << endl;
}

void CdPlayer::eject()
{
	title = "";
	cout << cdPlayerDescription << " eject" << endl;
}

void CdPlayer::play(const string& title)
{
	this->title = title;
	currentTrack = 0;
	cout << cdPlayerDescription << " playing \" " << title << "\"" << endl;
}

void CdPlayer::play(int track)
{
	if (title == "") {
		cout << cdPlayerDescription << " can't play track " << track << ", no cd inserted" << endl;
	} else {
		currentTrack = track;
		cout << cdPlayerDescription << " playing track " << track << endl;
	}
}

void CdPlayer::stop()
{
	currentTrack = 0;
	cout << cdPlayerDescription << " stopped" << endl;
}

void CdPlayer::pause()
{
	cout << cdPlayerDescription << " paused \" " << title << "\"" << endl;
}

string CdPlayer::toString() const {
	return cdPlayerDescription;
}
