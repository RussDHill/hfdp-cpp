#include "stdafx.h"
#include "ComplaintHandler.h"

ComplaintHandler::ComplaintHandler()
{

}

ComplaintHandler::~ComplaintHandler()
{

}

void ComplaintHandler::handleRequest(shared_ptr<Email> email)
{
	if (email->getEmailType() == COMPLAINT) {
		cout << "Email sent to legal department - " << email->getMsg() << endl;
	} else {
		Handler::handleRequest(email);
	}
}