#ifndef CEILING_FAN_OFF_COMMAND_H
#define CEILING_FAN_OFF_COMMAND_H

#include "Command.hpp"
#include "CeilingFan.hpp"
#include <string>

class CeilingFanOffCommand : public Command
{
	public:
		CeilingFanOffCommand(CeilingFan *cf) : ceilingFan(cf) { }
		void execute() override;
		void undo() override;
		std::string getClassName() const override { return className; }
	private:
		CeilingFan *ceilingFan;
		CeilingFan::Speed prevSpeed;
		std::string className = "CeilingFanOffCommand";
};

inline
void
CeilingFanOffCommand::execute()
{
	prevSpeed = ceilingFan->getSpeed();
	ceilingFan->off();
}

inline
void
CeilingFanOffCommand::undo()
{
	switch (prevSpeed) {
		case CeilingFan::Speed::HIGH:
			ceilingFan->high();
			break;
		case CeilingFan::Speed::MEDIUM:
			ceilingFan->medium();
			break;
		case CeilingFan::Speed::LOW:
			ceilingFan->low();
			break;
		case CeilingFan::Speed::OFF:
			ceilingFan->off();
			break;
		default:
			break;
	}
}

#endif /* CEILING_FAN_OFF_COMMAN_H */
