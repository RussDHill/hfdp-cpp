#pragma once

#define DISABLE_COPY_AND_ASSIGN(Class) private: Class(const Class&); Class& operator=(const Class&);

class MenuItem;

// Interfaces
class Menu
{
public:
	virtual vector< shared_ptr<MenuItem> > getMenuItems() = 0;
	virtual ~Menu() {};
};
