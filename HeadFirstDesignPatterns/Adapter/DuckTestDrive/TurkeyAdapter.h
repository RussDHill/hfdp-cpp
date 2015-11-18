#pragma once

#include "IFace.h"

class TurkeyAdapter : public Duck  
{
public:
	virtual void quack();
	virtual void fly();
	TurkeyAdapter(shared_ptr<Turkey> turkey);
	virtual ~TurkeyAdapter();
private:
	shared_ptr<Turkey> adapterTurkey;

	DISABLE_COPY_AND_ASSIGN(TurkeyAdapter)
};
