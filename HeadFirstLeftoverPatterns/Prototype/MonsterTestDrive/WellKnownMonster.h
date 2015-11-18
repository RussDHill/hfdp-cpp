#pragma once

#include "IFace.h"

class WellKnownMonster : public IMonster  
{
public:
	PSTR toString();
	WellKnownMonster(const WellKnownMonster& src);
	virtual shared_ptr<IMonster> clone();
	WellKnownMonster();
	virtual ~WellKnownMonster();
private:
	PSTR name;

	WellKnownMonster& operator=(const WellKnownMonster& rhs);
};
