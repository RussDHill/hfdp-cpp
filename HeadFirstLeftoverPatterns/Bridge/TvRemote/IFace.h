#pragma once

#define DISABLE_COPY_AND_ASSIGN(Class) private: Class(const Class&); Class& operator=(const Class&);

// Interfaces
class ITv
{
public:
	virtual void on() = 0;
	virtual void off() = 0;
	virtual void tuneChannel(int channel) = 0;
	virtual ~ITv() {};
};

class IRemoteControl
{
public:
	virtual void on()
	{
		remoteControlImplementor->on();	
	};
	virtual void off()
	{
		remoteControlImplementor->off();	
	};
	virtual void setChannel(int channel) 
	{
		remoteControlImplementor->tuneChannel(channel);
	};
	virtual ~IRemoteControl() {};
protected:
	shared_ptr<ITv> remoteControlImplementor;
};


