#include "stdafx.h"
#include "FanHandler.h"

FanHandler::FanHandler()
{

}

FanHandler::~FanHandler()
{

}

void FanHandler::handleRequest(shared_ptr<Email> email)
{
	if (email->getEmailType() == FAN) {
		cout << "Email sent to CEO - " << email->getMsg() << endl;
	} else {
		Handler::handleRequest(email);
	}
}