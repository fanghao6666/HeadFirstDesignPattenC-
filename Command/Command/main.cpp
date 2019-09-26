#include "remote.h"
#include "tv_on_command.h"
#include "tv_off_command.h"
#include "light_on_command.h"
#include "light_off_command.h"

int main() {
	REMOTE remote;

	TV tv;
	TV_ON_COMMAND tv_on_command(tv);
	TV_OFF_COMMAND tv_off_command(tv);
	remote.set(0, tv_on_command, tv_off_command);

	LIGHT light;
	LIGHT_ON_COMMAND light_on_command(light);
	LIGHT_OFF_COMMAND light_off_command(light);
	remote.set(1, light_on_command, light_off_command);

	remote.press_on_button(0);
	remote.press_off_button(1);
	remote.press_on_button(2);
	
	return 0;
}