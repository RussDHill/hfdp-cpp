#include "stdafx.h"
#include "StereoOnWithCDCommand.h"
#include "Stereo.h"

StereoOnWithCDCommand::StereoOnWithCDCommand(shared_ptr<Stereo> stereo)
	:stereo(stereo)
{

}

StereoOnWithCDCommand::StereoOnWithCDCommand()
{

}

StereoOnWithCDCommand::~StereoOnWithCDCommand()
{

}

void StereoOnWithCDCommand::execute()
{
	stereo->on();
	stereo->setCD();
	stereo->setVolume(11);
}

void StereoOnWithCDCommand::undo()
{
	stereo->off();
}

string StereoOnWithCDCommand::toString()
{
	return "StereoOnWithCDCommand";
}