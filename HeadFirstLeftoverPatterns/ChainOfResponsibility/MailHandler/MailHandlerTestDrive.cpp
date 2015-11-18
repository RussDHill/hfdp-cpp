// MailHandlerTestDrive.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ComplaintHandler.h"
#include "FanHandler.h"
#include "NewLocHandler.h"
#include "SpamHandler.h"
#include "Email.h"

int main(int argc, char* argv[])
{
	SpamHandler spam;
	FanHandler fan;
	ComplaintHandler complaint;
	NewLocHandler newLoc;

	spam.setSuccessor(&fan);
	spam.setSuccessor(&complaint);
	spam.setSuccessor(&newLoc);

	for (int i=0;i<30;i++) {
		ostringstream msg;
		msg << i;
		shared_ptr<Email> email(new Email(msg.str()));
		spam.handleRequest(email);
	}

	return 0;
}
