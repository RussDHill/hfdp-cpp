// RemoteControlTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SimpleRemoteControl.h"
#include "Light.h"
#include "LightOnCommand.h"
#include "GarageDoor.h"
#include "GarageDoorOpenCommand.h"

int main(int argc, char* argv[])
{
	shared_ptr<SimpleRemoteControl> remote(new SimpleRemoteControl());
	shared_ptr<Light> light(new Light());
	shared_ptr<GarageDoor> garageDoor(new GarageDoor());
	shared_ptr<LightOnCommand> lightOn(new LightOnCommand(light));
	shared_ptr<GarageDoorOpenCommand> garageOpen(new GarageDoorOpenCommand(garageDoor));

	remote->setCommand(lightOn);
	remote->buttonWasPressed();
	remote->setCommand(garageOpen);
	remote->buttonWasPressed();

	return 0;
}

