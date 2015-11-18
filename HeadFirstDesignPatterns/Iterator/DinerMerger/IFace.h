#pragma once

#define DISABLE_COPY_AND_ASSIGN(Class) private: Class(const Class&); Class& operator=(const Class&);

class MenuItem;
// Interfaces
class Iterator
{
public:
	virtual bool hasNext() = 0;
	virtual shared_ptr<MenuItem> next() = 0;
	virtual ~Iterator() {};
};

class Menu
{
public:
	virtual shared_ptr<Iterator> createIterator() = 0;
	virtual ~Menu() {};
};
