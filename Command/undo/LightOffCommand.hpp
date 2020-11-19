#ifndef LIGHT_OFF_COMMAND_H
#define LIGHT_OFF_COMMAND_H

#include "Command.hpp"
#include "Light.hpp"
#include <string>

class LightOffCommand : public Command {
	public:
		LightOffCommand(Light *l) : light(l) { }
		void execute() override;
		void undo() override { light->dim(level); }
		std::string getClassName() const override { return className; }
	private:
		Light *light;
		int level = 0;
		std::string className = "LightOffCommand";
};

inline
void
LightOffCommand::execute()
{
	level = light ->getLevel();
	light->off();
}

#endif /* LIGHT_OFF_COMMAND_H */
