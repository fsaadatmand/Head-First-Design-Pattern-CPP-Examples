#ifndef LIGHT_ON_COMMAND_H
#define LIGHT_ON_COMMAND_H

#include "Command.hpp"
#include "Light.hpp"

class LightOnCommand : public Command {
	public:
		LightOnCommand(Light *l) : light(l) { }
		void execute() const override { light->on(); }
	private:
		Light *light;
};

#endif /* LIGHT_ON_COMMAND_H */
