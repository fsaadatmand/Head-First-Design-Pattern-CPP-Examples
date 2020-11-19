#ifndef DIMMER_LIGHT_ON_COMMAND_H
#define DIMMER_LIGHT_ON_COMMAND_H

#include "Command.hpp"
#include "Light.hpp"

class DimmerLightOnCommand : public Command {
	public:
		DimmerLightOnCommand(Light *l) : light(l) {}
		void execute() override;
		void undo() override { light->dim(prevLevel); }
	private:
		Light *light;
		int prevLevel;
};

inline
void
DimmerLightOnCommand::execute()
{
	prevLevel = light->getLevel();
	light->dim(75);
}

#endif /* DIMMER_LIGHT_ON_COMMAND_H */
