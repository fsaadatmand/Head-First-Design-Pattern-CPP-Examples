#ifndef GARAGE_DOOR_DOWN_COMMAND_H
#define GARAGE_DOOR_DOWN_COMMAND_H

#include "Command.hpp"
#include "GarageDoor.hpp"
#include <string>

class GarageDoorDownCommand : public Command {
	public:
		GarageDoorDownCommand(GarageDoor *gd) : garageDoor(gd) { }
		void execute() override { garageDoor->down(); }
		std::string getClassName() const override { return className; };
	private:
		GarageDoor *garageDoor;
		std::string className = "GarageDoorDownCommand";
};

#endif /* GARAGE_DOOR_DOWN_COMMAND_H */
