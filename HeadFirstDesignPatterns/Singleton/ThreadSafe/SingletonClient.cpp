// SingletonClient.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Singleton.h"

int main(int argc, char* argv[])
{
	shared_ptr<Singleton> singleton = Singleton::getInstance();
	singleton->setValue(10);
	shared_ptr<Singleton> singleton2 = Singleton::getInstance();
	cout << "Value is " << singleton2->getValue() << endl;
	singleton2->setValue(5);
	cout << "Value is " << singleton->getValue() << endl;
	
	return 0;
}

