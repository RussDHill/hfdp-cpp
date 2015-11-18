#pragma once

#include "IFace.h"

class Goose;
class Observable;

class GooseAdapter : public Quackable  
{
public:
	virtual string toString() const;
	void quack() const;
	virtual void registerObserver(Observer* observer);
	virtual void notifyObservers() const;
	GooseAdapter(shared_ptr<Goose> goose);
	virtual ~GooseAdapter();
private:
	shared_ptr<Goose> adapterGoose;
	shared_ptr<Observable> observable;

	DISABLE_COPY_AND_ASSIGN(GooseAdapter)
};

