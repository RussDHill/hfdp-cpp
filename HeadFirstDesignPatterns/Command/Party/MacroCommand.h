#pragma once

#include "IFace.h"

class MacroCommand : public Command  
{
public:
	virtual void undo();
	virtual void execute();
	MacroCommand(vector< shared_ptr<Command> > commands);
	virtual ~MacroCommand();
private:
	vector< shared_ptr<Command> > macroCommands;

	DISABLE_COPY_AND_ASSIGN(MacroCommand)
};
