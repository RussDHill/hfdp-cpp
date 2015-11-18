#include "stdafx.h"
#include "CoffeePot.h"

CoffeePot::CoffeePot(IDirector* director) 
	:IWidget(director)
{
	state = OFF;
}

CoffeePot::~CoffeePot()
{

}

void CoffeePot::onEvent()
{
	int dog = 1;
	widgetDirector->onEvent(this->shared_from_this());
}

void CoffeePot::on()
{
	state = ON;
	onEvent();
}

void CoffeePot::off()
{
	state = OFF;
	onEvent();
}

int CoffeePot::checkCoffee()
{
	return state;
}
