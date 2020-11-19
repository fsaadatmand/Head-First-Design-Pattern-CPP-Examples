#ifndef LIGHT_ON_COMMAND_H
#define LIGHT_ON_COMMAND_H

#include "Command.hpp"
#include "Light.hpp"
#include <string>

class LightOnCommand : public Command {
	public:
		LightOnCommand(Light *l) : light(l) { }
		void execute() override { light->on(); }
		std::string getClassName() const override { return className; }
	private:
		Light *light;
		std::string className = "LightOnCommand";
};

#endif /* LIGHT_ON_COMMAND_H */
