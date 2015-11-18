#pragma once

#include "IFace.h"

class Stereo;

class StereoOffCommand : public Command  
{
public:
	virtual void execute();
	virtual void undo();
	StereoOffCommand(shared_ptr<Stereo> stereo);
	virtual ~StereoOffCommand();
private:
	shared_ptr<Stereo> commandStereo;

	DISABLE_COPY_AND_ASSIGN(StereoOffCommand)
};
