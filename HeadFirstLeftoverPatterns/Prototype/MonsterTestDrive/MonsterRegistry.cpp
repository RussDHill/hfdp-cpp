#include "stdafx.h"
#include "MonsterRegistry.h"
#include "IFace.h"
#include "BirdLikeMonster.h"
#include "DynamicPlayerGeneratedMonster.h"
#include "UnderSeaMonster.h"
#include "WellKnownMonster.h"

MonsterRegistry::MonsterRegistry()
{
	registry.push_back(shared_ptr<IMonster>(new BirdLikeMonster()));
	registry.push_back(shared_ptr<IMonster>(new DynamicPlayerGeneratedMonster()));
	registry.push_back(shared_ptr<IMonster>(new UnderSeaMonster()));
	registry.push_back(shared_ptr<IMonster>(new WellKnownMonster()));
}

MonsterRegistry::~MonsterRegistry()
{

}

shared_ptr<IMonster> MonsterRegistry::getMonster(int monsterRequired)
{
	shared_ptr<IMonster> monster = registry.at(monsterRequired);
	return monster->clone();
}