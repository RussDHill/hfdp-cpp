#include "stdafx.h"
#include "Context.h"
#include "IFace.h"

Context::Context(string code)
{
	Tokenize(code, ";");
}

Context::~Context()
{

}

void Context::Tokenize(const string &str, const string &sep)
{
	string::size_type lastPos = str.find_first_not_of(sep, 0);
	string::size_type pos = str.find_first_of(sep, lastPos);

	while (string::npos != pos || string::npos != lastPos)
	{
		tokens.push_back(str.substr(lastPos, pos - lastPos));
		lastPos = str.find_first_not_of(sep, pos);
		pos = str.find_first_of(sep, lastPos);
	}
}

const std::vector<string>& Context::getTokens() const
{
   return tokens;
}
