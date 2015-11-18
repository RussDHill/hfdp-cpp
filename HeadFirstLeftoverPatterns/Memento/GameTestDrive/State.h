#pragma once

class State  
{
public:
	void resetLevel();
	void incrementSubLevel();
	int getSubLevel();
	void resetSubLevel();
	int getLevel();
	void incrementLevel();
	State();
	virtual ~State();
private:
	int subLevel;
	int level;
};
