#pragma once

#define DISABLE_COPY_AND_ASSIGN(Class) private: Class(const Class&); Class& operator=(const Class&);

// Interfaces	
class Quackable
{
public:
	virtual void quack() const = 0;
	virtual ~Quackable(){};
};


