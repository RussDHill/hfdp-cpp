#pragma once

class Command;

class RemoteControlWithUndo  
{
public:
	string toString() const;
	void setCommand(int slot, shared_ptr<Command> onCommand, shared_ptr<Command> offCommand);
	void undoButtonWasPushed();
	void onButtonWasPushed(int slot);
	void offButtonWasPushed(int slot);
	RemoteControlWithUndo();
	virtual ~RemoteControlWithUndo();
private:
	vector< shared_ptr<Command> > onCommands;
	vector< shared_ptr<Command> > offCommands;
	shared_ptr<Command> undoCommand;
	shared_ptr<Command> noCommand;

	RemoteControlWithUndo(const RemoteControlWithUndo&); 
	RemoteControlWithUndo& operator=(const RemoteControlWithUndo&);
};
