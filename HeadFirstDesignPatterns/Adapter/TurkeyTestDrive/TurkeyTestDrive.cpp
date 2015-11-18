// DuckTestDrive.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "IFace.h"
#include "MallardDuck.h"
#include "WildTurkey.h"
#include "DuckAdapter.h"

void testTurkey(shared_ptr<Turkey> turkey) {
	turkey->gobble();
	turkey->fly();
}

int main(int argc, char* argv[])
{
	shared_ptr<MallardDuck> duck(new MallardDuck());

	shared_ptr<WildTurkey> turkey(new WildTurkey());
	shared_ptr<Turkey> duckAdapter(new DuckAdapter(duck));

	cout << "The Duck says..." << endl;
	duck->quack();
	duck->fly();

	cout << endl << "The Turkey says..." << endl;
	testTurkey(turkey);
	
	cout << endl << "The DuckAdapter says..." << endl;
	testTurkey(duckAdapter);

	return 0;
}
