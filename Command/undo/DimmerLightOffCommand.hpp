#ifndef DIMMER_LIGHT_OFF_COMMAND_H
#define DIMMER_LIGHT_OFF_COMMAND_H

#include "Command.hpp"
#include "Light.hpp"

class DimmerLightOffCommand : public Command {
	public:
		DimmerLightOffCommand(Light *l) : light(l) {}
		void execute() override;
		void undo() override { light->dim(prevLevel); }
	private:
		Light *light;
		int prevLevel = 100;
};

inline
void
DimmerLightOffCommand::execute()
{
	prevLevel = light->getLevel();
	light->off();
}

#endif /* DIMMER_LIGHT_OFF_COMMAND_H */
