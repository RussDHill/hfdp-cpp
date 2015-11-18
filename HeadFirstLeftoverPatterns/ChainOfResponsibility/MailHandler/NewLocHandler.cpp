#include "stdafx.h"
#include "NewLocHandler.h"

NewLocHandler::NewLocHandler()
{

}

NewLocHandler::~NewLocHandler()
{

}

void NewLocHandler::handleRequest(shared_ptr<Email> email)
{
	if (email->getEmailType() == NEW_LOC) {
		cout << "Email sent to business development - " << email->getMsg() << endl;
	} else {
		Handler::handleRequest(email);
	}
}