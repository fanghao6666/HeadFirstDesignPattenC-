#pragma once

#include "command.h"
#include <iostream>

class REMOTE {
public:
	REMOTE() {
		for (int i = 0; i < MAX_SLOT_NUM; i++) {
			on_commands[i] = NULL;
			off_commands[i] = NULL;
		}
	}

	void set(int slot, COMMAND& on_command, COMMAND& off_command) {
		if (slot < MAX_SLOT_NUM) {
			on_commands[slot] = &on_command;
			off_commands[slot] = &off_command;
		}
	}

	void press_on_button(int slot) {
		if (slot < MAX_SLOT_NUM) {
			if (NULL != on_commands[slot]) {
				on_commands[slot]->execute();
			}
			else {
				std::cout << "slot " << slot << " is empty" << std::endl;
			}
		}
	}

	void press_off_button(int slot) {
		if (slot < MAX_SLOT_NUM) {
			if (NULL != off_commands[slot]) {
				off_commands[slot]->execute();
			}
			else {
				std::cout << "slot " << slot << " is empty" << std::endl;
			}
		}
	}
private:
	const static int MAX_SLOT_NUM = 7;
	COMMAND *on_commands[MAX_SLOT_NUM];
	COMMAND *off_commands[MAX_SLOT_NUM];
};