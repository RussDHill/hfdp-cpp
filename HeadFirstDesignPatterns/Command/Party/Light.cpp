#include "stdafx.h"
#include "Light.h"

Light::Light(const string& location)
	:lightLocation(location)
{

}

Light::~Light()
{

}

void Light::on()
{
	cout << "Light is on" << endl;
}

void Light::off()
{
	cout << "Light is off" << endl;
}

void Light::dim(int level) {
	this->level = level;
	if (level == 0) {
		off();
	} else {
		cout << "Light is dimmed to " << level << "%" << endl;
	}
}

int Light::getLevel() {
	return level;
}
