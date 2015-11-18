#pragma once

class Command;

class RemoteControl  
{
public:
	string toString() const;
	void setCommand(int slot, shared_ptr<Command> onCommand, shared_ptr<Command> offCommand);
	void undoButtonWasPushed();
	void onButtonWasPushed(int slot);
	void offButtonWasPushed(int slot);
	RemoteControl();
	virtual ~RemoteControl();
private:
	vector< shared_ptr<Command> > onCommands;
	vector< shared_ptr<Command> > offCommands;
	shared_ptr<Command> undoCommand;
	shared_ptr<Command> noCommand;
};
