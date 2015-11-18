#include "stdafx.h"
#include "Hottub.h"

Hottub::Hottub()
	:hottubTemperature(20), on(false)
{

}

Hottub::~Hottub()
{

}

void Hottub::hottubOn() {
	on = true;
}

void Hottub::hottubOff() {
	on = false;
}

void Hottub::circulate() {
	if (on) {
		cout << "Hottub is bubbling!" << endl;
	}
}

void Hottub::jetsOn() {
	if (on) {
		cout << "Hottub jets are on" << endl;
	}
}

void Hottub::jetsOff() {
	if (on) {
		cout << "Hottub jets are off" << endl;
	}
}

void Hottub::setTemperature(int temperature) {
	if (temperature > hottubTemperature) {
		cout << "Hottub is heating to a steaming " << temperature << " degrees" << endl;
	} else {
		cout << "Hottub is cooling to a steaming " << temperature << " degrees" << endl;
	}
	hottubTemperature = temperature;
}
