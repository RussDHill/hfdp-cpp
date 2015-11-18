// MonsterTestDrive.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MonsterRegistry.h"
#include "IFace.h"

int main(int argc, char* argv[])
{
	shared_ptr<MonsterRegistry> monsterRegistry(new MonsterRegistry());

	shared_ptr<IMonster> monster = monsterRegistry->getMonster(BIRD_LIKE);
	cout << monster->toString() << endl;

	monster = monsterRegistry->getMonster(DYNAMIC);
	cout << monster->toString() << endl;

	monster = monsterRegistry->getMonster(UNDER_SEA);
	cout << monster->toString() << endl;

	monster = monsterRegistry->getMonster(WELL_KNOWN);
	cout << monster->toString() << endl;

	return 0;
}
