#pragma once

#include "command.h"
#include "light.h"

class LIGHT_ON_COMMAND : public COMMAND {
private:
	LIGHT &light;
public:
	LIGHT_ON_COMMAND(LIGHT &_light) : light(_light) {}
	void execute() { light.on(); }
};