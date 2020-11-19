#ifndef LIGHT_OFF_COMMAND_H
#define LIGHT_OFF_COMMAND_H

#include "Command.hpp"
#include "Light.hpp"
#include <string>

class LightOffCommand : public Command {
	public:
		LightOffCommand(Light *l) : light(l) { }
		void execute() override { light->off(); }
		void undo() override { light->on(); }
		std::string getClassName() const override { return className; }
	private:
		Light *light;
		std::string className = "LightOffCommand";
};

#endif /* LIGHT_OFF_COMMAND_H */
