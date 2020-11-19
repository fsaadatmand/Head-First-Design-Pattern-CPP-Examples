#ifndef CEILING_FAN_ON_COMMAND_H
#define CEILING_FAN_ON_COMMAND_H

#include "Command.hpp"
#include "CeilingFan.hpp"
#include <string>

class CeilingFanOnCommand : public Command
{
	public:
		CeilingFanOnCommand(CeilingFan *cf) : ceilingFan(cf) { }
		void execute() override { ceilingFan->medium(); }
		std::string getClassName() const override { return className; }
	private:
		CeilingFan *ceilingFan;
		std::string className = "CeilingFanOnCommand";
};

#endif /* CEILING_FAN_ON_COMMAND_H */
