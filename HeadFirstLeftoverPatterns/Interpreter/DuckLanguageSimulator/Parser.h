#pragma once

class Context;
class Sequence;

class Parser  
{
public:
	static shared_ptr<Sequence> parse(shared_ptr<Context> context);
	Parser();
	virtual ~Parser();
private: 
	Parser(const Parser&); 
	Parser& operator=(const Parser&);
};
