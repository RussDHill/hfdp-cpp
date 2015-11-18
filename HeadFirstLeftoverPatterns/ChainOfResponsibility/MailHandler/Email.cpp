#include "stdafx.h"
#include "Email.h"

Email::Email(string msg)
	:emailMsg(msg)
{
	emailType = rand() % 5;
}

Email::~Email()
{

}

string Email::getMsg()
{
	return emailMsg;
}

int Email::getEmailType()
{
	return emailType;
}