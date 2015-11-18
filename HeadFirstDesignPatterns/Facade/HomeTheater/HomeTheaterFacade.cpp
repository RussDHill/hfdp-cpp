#include "stdafx.h"
#include "HomeTheaterFacade.h"
#include "Tuner.h"
#include "DvdPlayer.h"
#include "CdPlayer.h"
#include "Amplifier.h"
#include "Projector.h"
#include "TheaterLights.h"
#include "Screen.h"
#include "PopcornPopper.h"


HomeTheaterFacade::HomeTheaterFacade(shared_ptr<Amplifier> amp, shared_ptr<Tuner> tuner, 
		shared_ptr<DvdPlayer> dvd, shared_ptr<CdPlayer> cd, shared_ptr<Projector> projector, 
		shared_ptr<TheaterLights> lights, shared_ptr<Screen> screen, shared_ptr<PopcornPopper> popper)
	:facadeAmp(amp), facadeTuner(tuner), facadeDvd(dvd), facadeCd(cd), facadeProjector(projector), 
			facadeLights(lights), facadeScreen(screen), facadePopper(popper)
{

}

HomeTheaterFacade::~HomeTheaterFacade()
{

}

void HomeTheaterFacade::watchMovie(const string& movie) {
	cout << "Get ready to watch a movie..." << endl;
	facadePopper->on();
	facadePopper->pop();
	facadeLights->dim(10);
	facadeScreen->down();
	facadeProjector->on();
	facadeProjector->wideScreenMode();
	facadeAmp->on();
	facadeAmp->setDvd(facadeDvd);
	facadeAmp->setSurroundSound();
	facadeAmp->setVolume(5);
	facadeDvd->on();
	facadeDvd->play(movie);
}


void HomeTheaterFacade::endMovie() {
	cout << "Shutting movie theater down..." << endl;
	facadePopper->off();
	facadeLights->on();
	facadeScreen->up();
	facadeProjector->off();
	facadeAmp->off();
	facadeDvd->stop();
	facadeDvd->eject();
	facadeDvd->off();
}

void HomeTheaterFacade::listenToCd(const string& cdTitle) {
	cout << "Get ready for an audiopile experence..." << endl;
	facadeLights->on();
	facadeAmp->on();
	facadeAmp->setVolume(5);
	facadeAmp->setCd(facadeCd);
	facadeAmp->setStereoSound();
	facadeCd->on();
	facadeCd->play(cdTitle);
}

void HomeTheaterFacade::endCd() {
	cout << "Shutting down CD..." << endl;
	facadeAmp->off();
	facadeAmp->setCd(facadeCd);
	facadeCd->eject();
	facadeCd->off();
}

void HomeTheaterFacade::listenToRadio(double frequency) {
	cout << "Tuning in the airwaves..." << endl;
	facadeTuner->on();
	facadeTuner->setFrequency(frequency);
	facadeAmp->on();
	facadeAmp->setVolume(5);
	facadeAmp->setTuner(facadeTuner);
}

void HomeTheaterFacade::endRadio() {
	cout << "Shutting down the tuner..." << endl;
	facadeTuner->off();
	facadeAmp->off();
}
