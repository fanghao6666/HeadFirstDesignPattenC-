#pragma once

#include "command.h"
#include "tv.h"

class TV_OFF_COMMAND : public COMMAND {
private:
	TV &tv;
public:
	TV_OFF_COMMAND(TV&_tv) : tv(_tv) {}
	void execute() { tv.close(); }
};