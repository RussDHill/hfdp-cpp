#include "stdafx.h"
#include "PopcornPopper.h"


PopcornPopper::PopcornPopper(const string& description) 
	:popperDescription(description)
{

}

PopcornPopper::~PopcornPopper()
{

}

void PopcornPopper::on()
{
	cout << popperDescription << " on" << endl;
}

void PopcornPopper::off()
{
	cout << popperDescription << " off" << endl;
}

void PopcornPopper::pop()
{
	cout << popperDescription << " popping popcorn!" << endl;
}

string PopcornPopper::toString() const
{
	return popperDescription;
}
