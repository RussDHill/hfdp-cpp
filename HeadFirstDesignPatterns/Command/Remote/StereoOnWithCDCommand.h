#pragma once

#include "IFace.h"

class Stereo;

class StereoOnWithCDCommand : public Command  
{
public:
	virtual void execute();
	StereoOnWithCDCommand(shared_ptr<Stereo> stereo);
	virtual ~StereoOnWithCDCommand();
private:
	shared_ptr<Stereo> commandStereo;

	DISABLE_COPY_AND_ASSIGN(StereoOnWithCDCommand)
};

