#pragma once

class Goose  
{
public:
	void honk() const;
	Goose();
	virtual ~Goose();
private:

	Goose(const Goose&); 
	Goose& operator=(const Goose&);
};

