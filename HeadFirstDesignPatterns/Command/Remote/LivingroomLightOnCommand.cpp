#include "stdafx.h"
#include "LivingroomLightOnCommand.h"
#include "Light.h"


LivingroomLightOnCommand::LivingroomLightOnCommand(shared_ptr<Light> light)
	:commandLight(light)
{
	
}

LivingroomLightOnCommand::~LivingroomLightOnCommand()
{

}

void LivingroomLightOnCommand::execute()
{
	commandLight->on();
}
