#ifndef LIGHT_ON_COMMAND_H
#define LIGHT_ON_COMMAND_H

#include "Command.hpp"
#include "Light.hpp"
#include <string>

class LightOnCommand : public Command {
	public:
		LightOnCommand(Light *l) : light(l) { }
		void execute() override;
		void undo() override { light->dim(level); }
		std::string getClassName() const override { return className; }
	private:
		Light *light;
		int level = 0;
		std::string className = "LightOnCommand";
};

inline
void
LightOnCommand::execute()
{
	level = light->getLevel();
	light->on();
}

#endif /* LIGHT_ON_COMMAND_H */
