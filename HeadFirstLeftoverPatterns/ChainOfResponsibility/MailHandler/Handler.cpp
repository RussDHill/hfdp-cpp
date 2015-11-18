#include "stdafx.h"
#include "Handler.h"

Handler::Handler()
{
	successor = 0;
}

Handler::~Handler()
{

}

void Handler::setSuccessor(Handler* handler)
{
	if (successor == 0) {
		successor = handler;
	} else {
		successor->setSuccessor(handler);
	}
}

void Handler::handleRequest(shared_ptr<Email> email)
{
	if (successor != 0) {
		successor->handleRequest(email);
	}
}
