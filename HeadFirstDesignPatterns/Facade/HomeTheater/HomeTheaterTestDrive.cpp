// HomeTheaterTestDrive.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Tuner.h"
#include "DvdPlayer.h"
#include "CdPlayer.h"
#include "Amplifier.h"
#include "Projector.h"
#include "TheaterLights.h"
#include "Screen.h"
#include "PopcornPopper.h"
#include "HomeTheaterFacade.h"

int main(int argc, char* argv[])
{
	shared_ptr<Amplifier> amp(new Amplifier("Top-O-Line Amplifier"));
	shared_ptr<Tuner> tuner(new Tuner("Top-O-Line AM/FM Tuner", amp));
	shared_ptr<DvdPlayer> dvd(new DvdPlayer("Top-O-Line DVD Player", amp));
	shared_ptr<CdPlayer> cd(new CdPlayer("Top-O-Line CD Player", amp));
	shared_ptr<Projector> projector(new Projector("Top-O-Line Projector", dvd));
	shared_ptr<TheaterLights> lights(new TheaterLights("Theater Ceiling Lights"));
	shared_ptr<Screen> screen(new Screen("Theater Screen"));
	shared_ptr<PopcornPopper> popper(new PopcornPopper("Popcorn Popper"));

	shared_ptr<HomeTheaterFacade> homeTheater(new 
		HomeTheaterFacade(amp, tuner, dvd, cd, projector, lights, screen, popper));
	
	homeTheater->watchMovie("The Shawshank Redemption");
	homeTheater->endMovie();

	return 0;
}

