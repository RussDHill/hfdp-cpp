#pragma once

class Goose  
{
public:
	void honk() const;
	Goose();
	virtual ~Goose();

	Goose(const Goose&); 
	Goose& operator=(const Goose&);
};

