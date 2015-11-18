#pragma once

#include "IFace.h"

class DynamicPlayerGeneratedMonster : public IMonster  
{
public:
	PSTR toString();
	DynamicPlayerGeneratedMonster(const DynamicPlayerGeneratedMonster& src);
	virtual shared_ptr<IMonster> clone();
	DynamicPlayerGeneratedMonster();
	virtual ~DynamicPlayerGeneratedMonster();
private:
	PSTR name;

	DynamicPlayerGeneratedMonster& operator=(const DynamicPlayerGeneratedMonster& rhs);
};
