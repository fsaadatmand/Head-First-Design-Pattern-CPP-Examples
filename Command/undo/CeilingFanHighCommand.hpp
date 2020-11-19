#ifndef CEILING_FAN_HIGH_COMMAND_H
#define CEILING_FAN_HIGH_COMMAND_H

#include "CeilingFan.hpp"
#include "Command.hpp"
#include <string>

class CeilingFanHighCommand : public Command {

	public:
		CeilingFanHighCommand(CeilingFan *cf) : ceilingFan(cf) { }
		void execute() override;
		void undo() override;
		std::string getClassName() const override { return className; };
	private:
		CeilingFan *ceilingFan;
		CeilingFan::Speed prevSpeed;
		std::string className = "CeilingFanHighCommand";
};

inline
void
CeilingFanHighCommand::execute()
{
	prevSpeed = ceilingFan->getSpeed();
	ceilingFan->high();
}

inline
void
CeilingFanHighCommand::undo()
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

#endif /* CEILING_FAN_HIGH_COMMAND_H */
