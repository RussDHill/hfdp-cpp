#pragma once

class Tuner;
class DvdPlayer;
class CdPlayer;
class Amplifier;
class Projector;
class TheaterLights;
class Screen;
class PopcornPopper;

class HomeTheaterFacade  
{
public:
	void endRadio();
	void listenToRadio(double frequency);
	void endCd();
	void listenToCd(const string& cdTitle);
	void endMovie();
	void watchMovie(const string& movie);
	HomeTheaterFacade(shared_ptr<Amplifier> amp, shared_ptr<Tuner> tuner, shared_ptr<DvdPlayer> dvd,
		shared_ptr<CdPlayer> cd, shared_ptr<Projector> projector, shared_ptr<TheaterLights> lights, 
		shared_ptr<Screen> screen, shared_ptr<PopcornPopper> popper);
	virtual ~HomeTheaterFacade();
private:
	shared_ptr<Amplifier> facadeAmp;
	shared_ptr<Tuner> facadeTuner;
	shared_ptr<DvdPlayer> facadeDvd;
	shared_ptr<CdPlayer> facadeCd;
	shared_ptr<Projector> facadeProjector;
	shared_ptr<TheaterLights> facadeLights;
	shared_ptr<Screen> facadeScreen;
	shared_ptr<PopcornPopper> facadePopper;

	HomeTheaterFacade(const HomeTheaterFacade&); 
	HomeTheaterFacade& operator=(const HomeTheaterFacade&);
};
