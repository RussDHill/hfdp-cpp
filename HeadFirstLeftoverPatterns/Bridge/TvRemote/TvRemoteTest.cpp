// TvRemoteTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Sony.h"
#include "Rca.h"
#include "ConcreateRemote.h"

int main(int argc, char* argv[])
{
	shared_ptr<ITv> tv(new Sony());
	shared_ptr<ConcreateRemote> remote(new ConcreateRemote(tv));

	remote->on();
	remote->nextChannel();
	remote->nextChannel();
	remote->off();

	tv.reset(new Rca());
	remote.reset(new ConcreateRemote(tv));

	remote->on();
	remote->nextChannel();
	remote->nextChannel();
	remote->off();

	return 0;
}
