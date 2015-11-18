#pragma once

class IExpression;

class Context  
{
public:
	const vector<string>& getTokens() const;
	Context(string code);
	virtual ~Context();
private:
	void Tokenize(const string& str, const string& sep);
	vector<string> tokens;
};
