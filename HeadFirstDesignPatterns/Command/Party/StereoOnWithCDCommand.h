#pragma once

#include "IFace.h"

class Stereo;

class StereoOnWithCDCommand : public Command  
{
public:
	virtual string toString();
	virtual void execute();
	virtual void undo();
	StereoOnWithCDCommand();
	StereoOnWithCDCommand(shared_ptr<Stereo> stereo);
	virtual ~StereoOnWithCDCommand();
private:
	shared_ptr<Stereo> stereo;

	DISABLE_COPY_AND_ASSIGN(StereoOnWithCDCommand)
};
