// DuckTestDrive.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MallardDuck.h"
#include "WildTurkey.h"
#include "TurkeyAdapter.h"

void testDuck(shared_ptr<Duck> duck) {
	duck->quack();
	duck->fly();
}


int main(int argc, char* argv[])
{
	shared_ptr<MallardDuck> duck(new MallardDuck());

	shared_ptr<WildTurkey> turkey(new WildTurkey());
	shared_ptr<Duck> turkeyAdapter(new TurkeyAdapter(turkey));

	cout << "The Turkey says..." << endl;
	turkey->gobble();
	turkey->fly();

	cout << endl << "The Duck says..." << endl;
	testDuck(duck);
	
	cout << endl << "The TurkeyAdapter says..." << endl;
	testDuck(turkeyAdapter);

	return 0;
}

