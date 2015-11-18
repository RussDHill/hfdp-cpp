#include "stdafx.h"
#include "MacroCommand.h"

MacroCommand::MacroCommand(vector< shared_ptr<Command> > commands)
	:macroCommands(commands)
{

}

MacroCommand::~MacroCommand()
{

}


void MacroCommand::execute()
{
	for (unsigned i=0;i<macroCommands.size();i++) {
		macroCommands.at(i)->execute();
	}
}

void MacroCommand::undo()
{
	for (unsigned i=0;i<macroCommands.size();i++) {
		macroCommands.at(i)->undo();
	}
}
