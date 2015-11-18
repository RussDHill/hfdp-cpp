#pragma once

#include "IFace.h"

class BirdLikeMonster : public IMonster  
{
public:
	PSTR toString();
	BirdLikeMonster(const BirdLikeMonster& src);
	virtual shared_ptr<IMonster> clone();
	BirdLikeMonster();
	virtual ~BirdLikeMonster();
private:
	PSTR name;

	BirdLikeMonster& operator=(const BirdLikeMonster& rhs);
};
