#pragma once

class Light  
{
public:
	void off();
	void on();
	Light();
	virtual ~Light();
private: 
	Light(const Light&); 
	Light& operator=(const Light&);
};
