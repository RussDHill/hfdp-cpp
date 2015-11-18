#pragma once

class Email  
{
public:
	int getEmailType();
	string getMsg();
	Email(string msg);
	virtual ~Email();
private:
	string emailMsg;
	int emailType;
};
