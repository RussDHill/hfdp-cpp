#pragma once

class Quackable;

class DuckSimulator 
{
public:
	void simulate();
	DuckSimulator();
	virtual ~DuckSimulator();
private:
	void simulate(shared_ptr<Quackable> duck);

	DuckSimulator(const DuckSimulator&); 
	DuckSimulator& operator=(const DuckSimulator&);
};
