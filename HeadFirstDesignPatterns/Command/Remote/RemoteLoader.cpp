// RemoteLoader.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CeilingFan.h"
#include "GarageDoor.h"
#include "Hottub.h"
#include "Light.h"
#include "Stereo.h"
#include "CeilingFanOffCommand.h"
#include "CeilingFanOnCommand.h"
#include "GarageDoorDownCommand.h"
#include "GarageDoorUpCommand.h"
#include "HottubOffCommand.h"
#include "HottubOnCommand.h"
#include "LightOffCommand.h"
#include "LightOnCommand.h"
#include "LivingroomLightOffCommand.h"
#include "LivingroomLightOnCommand.h"
#include "StereoOffCommand.h"
#include "StereoOnWithCDCommand.h"
#include "RemoteControl.h"
#include "IFace.h"
#include "NoCommand.h"

int main(int argc, char* argv[])
{
	shared_ptr<RemoteControl> remoteControl(new RemoteControl());

	shared_ptr<Light> livingRoomLight(new Light("Living Room"));
	shared_ptr<Light> kitchenLight(new Light("Kitchen"));
	shared_ptr<CeilingFan> ceilingFan(new CeilingFan("Living Room"));
	shared_ptr<GarageDoor> garageDoor(new GarageDoor(""));
	shared_ptr<Stereo> stereo(new Stereo("Living Room"));

	shared_ptr<LightOnCommand> livingRoomLightOn(new LightOnCommand(livingRoomLight));
	shared_ptr<LightOffCommand> livingRoomLightOff(new LightOffCommand(livingRoomLight));
	shared_ptr<LightOnCommand> kitchenLightOn(new LightOnCommand(kitchenLight));
	shared_ptr<LightOffCommand> kitchenLightOff(new LightOffCommand(kitchenLight));

	shared_ptr<CeilingFanOnCommand> ceilingFanOn(new CeilingFanOnCommand(ceilingFan));
	shared_ptr<CeilingFanOffCommand> ceilingFanOff(new CeilingFanOffCommand(ceilingFan));

	shared_ptr<GarageDoorUpCommand> garageDoorUp(new GarageDoorUpCommand(garageDoor));
	shared_ptr<GarageDoorDownCommand> garageDoorDown(new GarageDoorDownCommand(garageDoor));

	shared_ptr<StereoOnWithCDCommand> stereoOnWithCD(new StereoOnWithCDCommand(stereo));
	shared_ptr<StereoOffCommand> stereoOff(new StereoOffCommand(stereo));

	remoteControl->setCommand(0, livingRoomLightOn, livingRoomLightOff);
	remoteControl->setCommand(1, kitchenLightOn, kitchenLightOff);
	remoteControl->setCommand(2, ceilingFanOn, ceilingFanOff);
	remoteControl->setCommand(3, stereoOnWithCD, stereoOff);

	cout << remoteControl->toString() << endl;

	remoteControl->onButtonWasPushed(0);
	remoteControl->offButtonWasPushed(0);
	remoteControl->onButtonWasPushed(1);
	remoteControl->offButtonWasPushed(1);
	remoteControl->onButtonWasPushed(2);
	remoteControl->offButtonWasPushed(2);
	remoteControl->onButtonWasPushed(3);
	remoteControl->offButtonWasPushed(3);

	return 0;
}

