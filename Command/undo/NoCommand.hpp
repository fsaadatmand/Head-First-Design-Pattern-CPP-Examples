#ifndef NO_COMMAND_H
#define NO_COMMAND_H

#include "Command.hpp"
#include <string>

class NoCommand : public Command {
	public:
		void execute() override { }
		void undo() override { }
		std::string getClassName() const override { return className; }
	private:
		std::string className = "NoCommand";
};

#endif /* NO_COMMAND_H */
