#pragma once

class IMonster;

class MonsterRegistry  
{
public:
	shared_ptr<IMonster> getMonster(int monsterRequired);
	MonsterRegistry();
	virtual ~MonsterRegistry();
private:
	vector< shared_ptr<IMonster> > registry;
};
