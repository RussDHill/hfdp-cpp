// Patternsland.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "VacationBuilder.h"
#include "Director.h"

int main(int argc, char* argv[])
{
	shared_ptr<IBuilder> builder(new VacationBuilder());
	shared_ptr<Director> director(new Director(builder));
	struct tm date = { 0, 0, 0, 7, 1, 110 };
	director->constructPlanner(date, "Freeman Family");

	return 0;
}
