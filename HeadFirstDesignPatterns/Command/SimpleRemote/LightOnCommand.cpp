#include "stdafx.h"
#include "LightOnCommand.h"
#include "Light.h"


LightOnCommand::LightOnCommand(shared_ptr<Light> light)
	:commandLight(light)
{

}

LightOnCommand::~LightOnCommand()
{

}

void LightOnCommand::execute()
{
	commandLight->on();
}
