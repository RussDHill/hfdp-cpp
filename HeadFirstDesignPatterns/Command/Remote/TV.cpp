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
	cout << "TV is on" << endl;
}

void TV::off() {
	cout << "TV is off" << endl;
}

void TV::setInputChannel() {
	channel = 3;
	cout << "Channel is set for VCR" << endl;
}
