#pragma once

class Screen  
{
public:
	string toString() const;
	void down();
	void up();
	Screen(const string& description);
	virtual ~Screen();
private:
	string screenDescription;

	Screen(const Screen&); 
	Screen& operator=(const Screen&);
};
