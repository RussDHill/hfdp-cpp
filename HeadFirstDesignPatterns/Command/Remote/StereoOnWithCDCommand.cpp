#include "stdafx.h"
#include "StereoOnWithCDCommand.h"
#include "Stereo.h"

StereoOnWithCDCommand::StereoOnWithCDCommand(shared_ptr<Stereo> stereo)
	:commandStereo(stereo)
{
	
}

StereoOnWithCDCommand::~StereoOnWithCDCommand()
{

}

void StereoOnWithCDCommand::execute()
{
	commandStereo->on();
	commandStereo->setCD();
	commandStereo->setVolume(11);
}
