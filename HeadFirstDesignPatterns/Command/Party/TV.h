#pragma once

class TV  
{
public:
	void on();
	void off();
	void setInputChannel();
	TV(const string& location);
	virtual ~TV();
private:
	string tvLocation;
	int channel;

	TV(const TV&); 
	TV& operator=(const TV&);
};