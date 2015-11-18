#include "stdafx.h"
#include "Parser.h"
#include "Context.h"
#include "FlyCommand.h"
#include "QuackCommand.h"
#include "RightCommand.h"
#include "Repetition.h"
#include "Sequence.h"
#include "Variable.h"

Parser::Parser()
{

}

Parser::~Parser()
{

}

//Grammar:
//
//  expression ::= <command> | <sequence> | <repetition>
//  sequence ::= <expression> ';' <expression>
//  command ::= right | quack | fly
//  repetition ::= while '(' <variable> ')' <expression>
//  variable ::= [A-Z,a-z]+

shared_ptr<Sequence> Parser::parse(shared_ptr<Context> context)
{
	shared_ptr<Sequence> sequence(new Sequence());
	const vector<string>& tokens = context->getTokens();
	vector<string>::const_iterator itr;

	for(itr=tokens.begin();itr!=tokens.end();++itr) {
		string str = *itr;
		if (0 == (str.compare("fly"))) {
			sequence->addExpression(shared_ptr<IExpression>(new FlyCommand()));
		} else if (0 == str.compare("quack")) {
			sequence->addExpression(shared_ptr<IExpression>(new QuackCommand()));
		} else if (0 == str.compare("right")) {
			sequence->addExpression(shared_ptr<IExpression>(new RightCommand()));
		} else if (0 == (str.substr(0, 5)).compare("while")) {

			string::size_type beginPos = str.find_first_of("(");
			string::size_type endPos = str.find_first_of(")");

			beginPos++;
			shared_ptr<Variable> variable(new Variable(str.substr(beginPos, endPos-beginPos)));

			endPos++;
			string command = str.substr(endPos);
			
			shared_ptr<IExpression> expression = 0;
			if (0 == (command.compare("fly"))) {
				expression = shared_ptr<IExpression>(new FlyCommand());
			} else if (0 == command.compare("quack")) {
				expression = shared_ptr<IExpression>(new QuackCommand());
			} else if (0 == command.compare("right")) {
				expression = shared_ptr<IExpression>(new RightCommand());
			}

			sequence->addExpression(shared_ptr<IExpression>(new Repetition(variable, expression)));
		}
	}

	return sequence;
}
