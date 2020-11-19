#ifndef GARAGE_DOOR_UP_COMMAND_H
#define GARAGE_DOOR_UP_COMMAND_H

#include "Command.hpp"
#include "GarageDoor.hpp"
#include <string>

class GarageDoorUpCommand : public Command {
	public:
		GarageDoorUpCommand(GarageDoor *gd) : garageDoor(gd) { }
		void execute() override { garageDoor->up(); }
		std::string getClassName() const override { return className; }
	private:
		GarageDoor *garageDoor;
		std::string className = "GarageDoorUpCommand";
};

#endif /* GARAGE_DOOR_UP_COMMAND_H */
