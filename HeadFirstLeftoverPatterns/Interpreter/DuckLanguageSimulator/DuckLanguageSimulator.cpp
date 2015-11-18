// DuckLanguageSimulator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Context.h"
#include "Parser.h"
#include "Sequence.h"

int main(int argc, char* argv[])
{
	string input;
	cout << "Enter name of file containing duck code: ";
	cin >> input;

	ifstream file(input.c_str());

	if (!file) {
		cout << "Failed to open file: " << input << endl;
		exit(1);
	}

	string fileContents;
	string line;
	while (!file.eof()) {
		file >> line;
		fileContents += line;
	}

	shared_ptr<Context> context(new Context(fileContents));

	shared_ptr<Sequence> sequence = Parser::parse(context);

	sequence->interpret(context);

	return 0;
}
