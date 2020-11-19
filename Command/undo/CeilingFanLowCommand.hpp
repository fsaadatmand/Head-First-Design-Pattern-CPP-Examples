#ifndef CEILING_FAN_LOW_COMMAND_H
#define CEILING_FAN_LOW_COMMAND_H

#include "Command.hpp"
#include "CeilingFan.hpp"
#include <string>

class CeilingFanLowCommand : public Command
{
	public:
		CeilingFanLowCommand(CeilingFan *cf) : ceilingFan(cf) { }
		void execute() override;
		void undo() override;
		std::string getClassName() const override { return className; }
	private:
		CeilingFan *ceilingFan;
		CeilingFan::Speed prevSpeed;
		std::string className = "CeilingFanLowCommand";
};

inline
void
CeilingFanLowCommand::execute()
{
	prevSpeed = ceilingFan->getSpeed();
	ceilingFan->low();
}

inline
void
CeilingFanLowCommand::undo()
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

#endif /* CEILING_FAN_LOW_COMMAN_H */
