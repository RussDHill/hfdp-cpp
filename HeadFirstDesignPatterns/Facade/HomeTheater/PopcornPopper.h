#pragma once

class PopcornPopper  
{
public:
	string toString() const;
	void pop();
	void off();
	void on();
	PopcornPopper(const string& description);
	virtual ~PopcornPopper();
private:
	string popperDescription;

	PopcornPopper(const PopcornPopper&); 
	PopcornPopper& operator=(const PopcornPopper&);
};
