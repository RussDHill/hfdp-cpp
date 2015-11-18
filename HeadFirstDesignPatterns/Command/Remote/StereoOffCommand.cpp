#include "stdafx.h"
#include "StereoOffCommand.h"
#include "Stereo.h"

StereoOffCommand::StereoOffCommand(shared_ptr<Stereo> stereo)
	:commandStereo(stereo)
{

}

StereoOffCommand::~StereoOffCommand()
{

}

void StereoOffCommand::execute()
{
	commandStereo->off();
}
