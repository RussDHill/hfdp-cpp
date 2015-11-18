// ConcreateRemote.cpp: Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ConcreateRemote.h"

ConcreateRemote::ConcreateRemote(shared_ptr<ITv> implementor)
	:currentStation(1)
{
	remoteControlImplementor = implementor;
}

ConcreateRemote::~ConcreateRemote()
{

}

void ConcreateRemote::nextChannel()
{
	currentStation++;
	setChannel(currentStation);
}

void ConcreateRemote::previousChannel()
{
	currentStation--;
	setChannel(currentStation);
}
