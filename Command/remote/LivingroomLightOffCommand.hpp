#ifndef LIVING_ROOM_LIGHT_OFF_COMMAND_H
#define LIVING_ROOM_LIGHT_OFF_COMMAND_H

#include "Command.hpp"
#include "Light.hpp"

class LivingroomLightOffCommand : public Command {
	public:
		LivingroomLightOffCommand(Light *l) : light(l) {}
		void execute() override { light->off(); }
	private:
		Light *light;
};

#endif /* LIVING_ROOM_LIGHT_OFF_COMMAND_H */
