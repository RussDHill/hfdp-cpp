#include "stdafx.h"
#include "Projector.h"


Projector::Projector(const string& description, shared_ptr<DvdPlayer> dvdPlayer) 
	:projectorDescription(description), projectorDvdPlayer(dvdPlayer)
{

}

Projector::~Projector()
{

}

void Projector::on()
{
	cout << projectorDescription << " on" << endl;
}

void Projector::off()
{
	cout << projectorDescription << " off" << endl;
}

void Projector::wideScreenMode()
{
	cout << projectorDescription << " in widescreen mode (16x9 aspect ratio)" << endl;
}

void Projector::tvMode()
{
	cout << projectorDescription << " in tv mode (4x3 aspect ratio)" << endl;
}

string Projector::toString() const
{
	return projectorDescription;
}
