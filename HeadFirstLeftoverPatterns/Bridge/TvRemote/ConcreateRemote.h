#pragma once

#include "IFace.h"

class ConcreateRemote : public IRemoteControl  
{
public:
	ConcreateRemote(shared_ptr<ITv> implementor);
	virtual ~ConcreateRemote();
	void nextChannel();
	void previousChannel();
private:
	int currentStation;

	DISABLE_COPY_AND_ASSIGN(ConcreateRemote)
};
