#include "stdafx.h"
#include "TurkeyAdapter.h"


TurkeyAdapter::TurkeyAdapter(shared_ptr<Turkey> turkey)
	:adapterTurkey(turkey)
{

}

TurkeyAdapter::~TurkeyAdapter()
{

}

void TurkeyAdapter::fly()
{
	for(int i=0;i<5;i++) {
		adapterTurkey->fly();
	}
}

void TurkeyAdapter::quack()
{
	adapterTurkey->gobble();
}
