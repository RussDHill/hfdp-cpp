#pragma once

#define DISABLE_COPY_AND_ASSIGN(Class) private: Class(const Class&); Class& operator=(const Class&);

class Menu;
class MenuItem;
class Ingredient;

// Interfaces
class IVisitor
{
public:
	virtual void visit(Ingredient* ingredient) = 0;
	virtual void visit(MenuItem* menuItem) = 0;
	virtual void visit(Menu* menu) = 0;
	virtual ~IVisitor(){};
};

