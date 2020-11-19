#include "util.hpp"

void undoCeilingFanCommand(Command &cmd)
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
