#include "stdafx.h"
#include "SpamHandler.h"

SpamHandler::SpamHandler()
{

}

SpamHandler::~SpamHandler()
{

}

void SpamHandler::handleRequest(shared_ptr<Email> email)
{
	if (email->getEmailType() == SPAM) {
		cout << "Email deleted - " << email->getMsg() << endl;
	} else {
		Handler::handleRequest(email);
	}
}