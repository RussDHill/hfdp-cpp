#pragma once

#include "IFace.h"

class Goose;

class GooseAdapter : public Quackable  
{
public:
	string toString();
	void quack() const;
	GooseAdapter(shared_ptr<Goose> goose);
	virtual ~GooseAdapter();
private:
	shared_ptr<Goose> adapterGoose;

	DISABLE_COPY_AND_ASSIGN(GooseAdapter)
};

