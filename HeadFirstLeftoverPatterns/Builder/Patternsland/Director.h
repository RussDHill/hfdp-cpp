#pragma once

class IBuilder;

class Director  
{
public:
	void constructPlanner(struct tm& date, string name);
	Director(shared_ptr<IBuilder> builder);
	virtual ~Director();
private:
	shared_ptr<IBuilder> directorBuilder;
};
