// RemoteLoader.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CeilingFan.h"
#include "Hottub.h"
#include "Light.h"
#include "Stereo.h"
#include "TV.h"
#include "CeilingFanOffCommand.h"
#include "CeilingFanHighCommand.h"
#include "CeilingFanMediumCommand.h"
#include "HottubOffCommand.h"
#include "HottubOnCommand.h"
#include "LightOffCommand.h"
#include "LightOnCommand.h"
#include "RemoteControl.h"
#include "IFace.h"
#include "MacroCommand.h"
#include "NoCommand.h"
#include "StereoOffCommand.h"
#include "StereoOnWithCDCommand.h"
#include "TVOffCommand.h"
#include "TVOnCommand.h"

int main(int argc, char* argv[])
{
	shared_ptr<RemoteControl> remoteControl(new RemoteControl());

	shared_ptr<Light> light(new Light("Living Room"));
	shared_ptr<Hottub> hottub(new Hottub());
	shared_ptr<Stereo> stereo(new Stereo("Living Room"));
	shared_ptr<TV> tv(new TV("Living Room"));

	shared_ptr<LightOnCommand> lightOn(new LightOnCommand(light));
	shared_ptr<HottubOnCommand> hottubOn(new HottubOnCommand(hottub));
	shared_ptr<TVOnCommand> tvOn(new TVOnCommand(tv));
	shared_ptr<StereoOnWithCDCommand> stereoOn(new StereoOnWithCDCommand(stereo));
	shared_ptr<LightOffCommand> lightOff(new LightOffCommand(light));
	shared_ptr<HottubOffCommand> hottubOff(new HottubOffCommand(hottub));
	shared_ptr<TVOffCommand> tvOff(new TVOffCommand(tv));
	shared_ptr<StereoOffCommand> stereoOff(new StereoOffCommand(stereo));

	vector< shared_ptr<Command> > partyOn;
	partyOn.push_back(lightOn);
	partyOn.push_back(tvOn);
	partyOn.push_back(hottubOn);
	partyOn.push_back(stereoOn);
	vector< shared_ptr<Command> > partyOff;
	partyOff.push_back(lightOff);
	partyOff.push_back(tvOff);
	partyOff.push_back(hottubOff);
	partyOff.push_back(stereoOff);

	shared_ptr<MacroCommand> partyOnMacro(new MacroCommand(partyOn));
	shared_ptr<MacroCommand> partyOffMacro(new MacroCommand(partyOff));

	remoteControl->setCommand(0, partyOnMacro, partyOffMacro);

	cout << remoteControl->toString() << endl;
	cout << "--- Pushing Macro On ---" << endl;
	remoteControl->onButtonWasPushed(0);
	cout << "--- Pushing Macro Off ---" << endl;
	remoteControl->offButtonWasPushed(0);

	return 0;
}

