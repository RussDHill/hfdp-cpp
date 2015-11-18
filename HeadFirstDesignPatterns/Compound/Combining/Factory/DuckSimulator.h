#pragma once

class Quackable;
class AbstractDuckFactory;

class DuckSimulator 
{
public:
	void simulate(shared_ptr<AbstractDuckFactory> duckFactory);
	void simulate();
	DuckSimulator();
	virtual ~DuckSimulator();
private:
	void simulate(shared_ptr<Quackable> duck);

	DuckSimulator(const DuckSimulator&); 
	DuckSimulator& operator=(const DuckSimulator&);
};
