#pragma once

#include "IFace.h"

class DuckAdapter : public Turkey  
{
public:
	virtual void gobble();
	virtual void fly();
	DuckAdapter(shared_ptr<Duck> duck);
	virtual ~DuckAdapter();
private:
	shared_ptr<Duck> adapterDuck;

	DISABLE_COPY_AND_ASSIGN(DuckAdapter)
};
