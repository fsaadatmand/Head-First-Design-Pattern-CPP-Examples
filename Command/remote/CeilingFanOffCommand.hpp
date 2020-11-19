#ifndef CEILING_FAN_OFF_COMMAND_H
#define CEILING_FAN_OFF_COMMAND_H

#include "Command.hpp"
#include "CeilingFan.hpp"
#include <string>

class CeilingFanOffCommand : public Command
{
	public:
		CeilingFanOffCommand(CeilingFan *cf) : ceilingFan(cf) { }
		void execute() override { ceilingFan->off(); }
		std::string getClassName() const override { return className; }
	private:
		CeilingFan *ceilingFan;
		std::string className = "CeilingFanOffCommand";
};

#endif /* CEILING_FAN_OFF_COMMAN_H */
