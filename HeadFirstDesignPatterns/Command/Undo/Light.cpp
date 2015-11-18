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
	cout << lightLocation << " light is on" << endl;
}

void Light::off()
{
	cout << lightLocation << " light is off" << endl;
}

void Light::dim(int level) {
	this->level = level;
	if (level == 0) {
		off();
	} else {
		cout << lightLocation << "Light is dimmed to " << level << endl;
	}
}

int Light::getLevel() {
	return level;
}
