// RemoteLoader.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CeilingFan.h"
#include "Light.h"
#include "CeilingFanOffCommand.h"
#include "CeilingFanHighCommand.h"
#include "CeilingFanMediumCommand.h"
#include "CeilingFanLowCommand.h"
#include "DimmerLightOffCommand.h"
#include "DimmerLightOnCommand.h"
#include "LightOffCommand.h"
#include "LightOnCommand.h"
#include "RemoteControlWithUndo.h"
#include "IFace.h"
#include "NoCommand.h"

int main(int argc, char* argv[])
{
	shared_ptr<RemoteControlWithUndo> remoteControl(new RemoteControlWithUndo());

	shared_ptr<Light> livingRoomLight(new Light("Living Room"));

	shared_ptr<LightOnCommand> livingRoomLightOn(new LightOnCommand(livingRoomLight));
	shared_ptr<LightOffCommand> livingRoomLightOff(new LightOffCommand(livingRoomLight));

	remoteControl->setCommand(0, livingRoomLightOn, livingRoomLightOff);

	remoteControl->onButtonWasPushed(0);
	remoteControl->offButtonWasPushed(0);
	cout << remoteControl->toString() << endl;
	remoteControl->undoButtonWasPushed();
	remoteControl->onButtonWasPushed(0);
	remoteControl->offButtonWasPushed(0);
	cout << remoteControl->toString() << endl;
	remoteControl->undoButtonWasPushed();

	shared_ptr<CeilingFan> ceilingFan(new CeilingFan("Living Room"));

	shared_ptr<CeilingFanMediumCommand> ceilingFanMedium(new CeilingFanMediumCommand(ceilingFan));
	shared_ptr<CeilingFanHighCommand> ceilingFanHigh(new CeilingFanHighCommand(ceilingFan));
	shared_ptr<CeilingFanOffCommand> ceilingFanOff(new CeilingFanOffCommand(ceilingFan));

	remoteControl->setCommand(1, ceilingFanMedium, ceilingFanOff);
	remoteControl->setCommand(2, ceilingFanHigh, ceilingFanOff);

	remoteControl->onButtonWasPushed(1);
	remoteControl->offButtonWasPushed(1);
	cout << remoteControl->toString() << endl;
	remoteControl->undoButtonWasPushed();

	remoteControl->onButtonWasPushed(2);
	cout << remoteControl->toString() << endl;
	remoteControl->undoButtonWasPushed();

	return 0;
}

