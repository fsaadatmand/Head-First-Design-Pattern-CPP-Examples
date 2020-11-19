#ifndef CEILING_FAN_MEDIUM_COMMAND_H
#define CEILING_FAN_MEDIUM_COMMAND_H

#include "Command.hpp"
#include "CeilingFan.hpp"
#include <string>

class CeilingFanMediumCommand : public Command
{
	public:
		CeilingFanMediumCommand(CeilingFan *cf) : ceilingFan(cf) { }
		void execute() override;
		void undo() override;
		std::string getClassName() const override { return className; }
	private:
		CeilingFan *ceilingFan;
		CeilingFan::Speed prevSpeed;
		std::string className = "CeilingFanMediumCommand";
};

inline
void
CeilingFanMediumCommand::execute()
{
	prevSpeed = ceilingFan->getSpeed();
	ceilingFan->medium();
}

inline
void
CeilingFanMediumCommand::undo()
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

#endif /* CEILING_FAN_MEDIUM_COMMAN_H */
