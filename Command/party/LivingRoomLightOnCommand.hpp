#ifndef LIVING_ROOM_LIGHT_ON_COMMAND_H
#define LIVING_ROOM_LIGHT_ON_COMMAND_H

#include "Command.hpp"
#include "Light.hpp"

class LivingroomLightOnCommand : public Command {
	public:
		LivingroomLightOnCommand(Light *l) : light(l) {}
		void execute() override { light->on(); }
		void undo() override { light->off(); }
	private:
		Light *light;
};

#endif /* LIVING_ROOM_LIGHT_ON_COMMAND_H */
