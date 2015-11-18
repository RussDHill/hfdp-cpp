#pragma once

#include "IFace.h"

class UnderSeaMonster : public IMonster  
{
public:
	PSTR toString();
	UnderSeaMonster(const UnderSeaMonster& src);
	virtual shared_ptr<IMonster> clone();
	UnderSeaMonster();
	virtual ~UnderSeaMonster();
private:
	PSTR name;

	UnderSeaMonster& operator=(const UnderSeaMonster& rhs);
};
