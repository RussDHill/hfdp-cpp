#include "stdafx.h"
#include "Hottub.h"

Hottub::Hottub()
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

void Hottub::bubblesOn() {
	if (on) {
		cout << "Hottub is bubbling!" << endl;
	}
}

void Hottub::bubblesOff() {
	if (on) {
		cout << "Hottub is not bubbling" << endl;
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
	this->temperature = temperature;
}

void Hottub::heat() {
	temperature = 105;
	cout << "Hottub is heating to a steaming 105 degrees" << endl;
}

void Hottub::cool() {
	temperature = 98;
	cout << "Hottub is cooling to 98 degrees" << endl;
}
