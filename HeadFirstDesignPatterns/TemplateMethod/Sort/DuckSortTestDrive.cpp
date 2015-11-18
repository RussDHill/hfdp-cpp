// DuckSortTestDrive.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Duck.h"


int main(int argc, char* argv[])
{
	list< shared_ptr<Duck> > ducks;
	list< shared_ptr<Duck> >::const_iterator itr;

	ducks.push_back(shared_ptr<Duck>(new Duck("Daffy", 8)));
	ducks.push_back(shared_ptr<Duck>(new Duck("Dewey", 2)));
	ducks.push_back(shared_ptr<Duck>(new Duck("Howard", 7)));
	ducks.push_back(shared_ptr<Duck>(new Duck("Louie", 2)));
	ducks.push_back(shared_ptr<Duck>(new Duck("Donald", 10))); 
	ducks.push_back(shared_ptr<Duck>(new Duck("Huey", 2)));

	cout << "Before sorting:" << endl;

	for (itr=ducks.begin();itr!=ducks.end();++itr) {
		printf("%s\n", (*itr)->toString().c_str());
	}

	printf("\nAfter sorting:\n");
	
	ducks.sort(ptr_fun(&Duck::compareTo));

	for (itr=ducks.begin();itr!=ducks.end();++itr) {
		printf("%s\n", (*itr)->toString().c_str());
	}

	return 0;
}

