#include "stdafx.h"
#include "Goose.h"

Goose::Goose()
{

}

Goose::~Goose()
{

}

void Goose::honk() const
{
	cout << "Honk" << endl;
}

string Goose::toString() const
{
	return "Goose";
}