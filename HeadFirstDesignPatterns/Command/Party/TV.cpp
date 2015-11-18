#include "stdafx.h"
#include "TV.h"


TV::TV(const string& location)
	:tvLocation(location)
{

}

TV::~TV()
{

}

void TV::on() {
	cout << tvLocation << " TV is on" << endl;
}

void TV::off() {
	cout << tvLocation << " TV is off" << endl;
}

void TV::setInputChannel() {
	channel = 3;
	cout << tvLocation << " channel is set for DVD" << endl;
}
