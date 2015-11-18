#pragma once

class Command;

class RemoteControl  
{
public:
	string toString() const;
	void setCommand(int slot, shared_ptr<Command> onCommand, shared_ptr<Command> offCommand);
	void onButtonWasPushed(int slot);
	void offButtonWasPushed(int slot);
	RemoteControl();
	virtual ~RemoteControl();
private:
	shared_ptr<Command> noCommand;
	vector< shared_ptr<Command> > onCommands;
	vector< shared_ptr<Command> > offCommands;

	RemoteControl(const RemoteControl&); 
	RemoteControl& operator=(const RemoteControl&);
};
