#include "stdafx.h"
#include "RemoteControlWithUndo.h"
#include "IFace.h"
#include "NoCommand.h"

RemoteControlWithUndo::RemoteControlWithUndo()
{
	noCommand = shared_ptr<Command>(new NoCommand());
	for (int i=0;i<7;i++) {
		onCommands.push_back(noCommand);
		offCommands.push_back(noCommand);
	}
	undoCommand = noCommand;
}

RemoteControlWithUndo::~RemoteControlWithUndo()
{

}
 
void RemoteControlWithUndo::setCommand(int slot, shared_ptr<Command> onCommand, shared_ptr<Command> offCommand) {
	onCommands[slot] = onCommand;
	offCommands[slot] = offCommand;
}

void RemoteControlWithUndo::onButtonWasPushed(int slot) {
	onCommands[slot]->execute();
	undoCommand = onCommands[slot];
}

void RemoteControlWithUndo::offButtonWasPushed(int slot) {
	offCommands[slot]->execute();
	undoCommand = offCommands[slot];
}

void RemoteControlWithUndo::undoButtonWasPushed() {
	undoCommand->undo();
}

string RemoteControlWithUndo::toString() const {
	ostringstream buffer;
	buffer << endl << "------ Remote Control With Undo-------" << endl;
	for (unsigned i=0;i<onCommands.size();i++) {
		buffer << "[slot" << i << "]   ";
		buffer << typeid(*onCommands.at(i)).name();
		buffer << "\t  ";
		buffer << typeid(*offCommands.at(i)).name();
		buffer << endl;
	}
	buffer << "[undo] " << typeid(*undoCommand).name() << endl;
	return buffer.str();
}
