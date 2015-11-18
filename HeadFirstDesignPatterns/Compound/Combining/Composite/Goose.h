#pragma once

class Goose  
{
public:
	void honk() const;
	Goose();
	virtual ~Goose();
	virtual string toString();

	Goose(const Goose&); 
	Goose& operator=(const Goose&);
};

