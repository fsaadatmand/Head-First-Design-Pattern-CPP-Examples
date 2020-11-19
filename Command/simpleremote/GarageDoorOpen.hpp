#ifndef GARAGE_DOOR_OPEN_H
#define GARAGE_DOOR_OPEN_H

#include "Command.hpp"
#include "GarageDoor.hpp"

class GarageDoorOpen : public Command {
	public:
		GarageDoorOpen(GarageDoor *gd) : garageDoor(gd) { }
		void execute() const override { garageDoor->up(); }
	private:
		GarageDoor *garageDoor;
};

#endif /* GARAGE_DOOR_OPEN_H */
