#pragma once

// Interfaces
class IMonster
{
public:
	virtual PSTR toString() = 0;
	virtual shared_ptr<IMonster> clone() = 0;
	virtual ~IMonster(){};
};

enum monsters { BIRD_LIKE, DYNAMIC, UNDER_SEA, WELL_KNOWN };


