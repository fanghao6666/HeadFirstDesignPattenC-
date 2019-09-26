#pragma once

#include "command.h"
#include "tv.h"

class TV_ON_COMMAND : public COMMAND {
private:
	TV &tv;
public:
	TV_ON_COMMAND(TV&_tv) : tv(_tv) {}
	void execute() { tv.open(); }
};