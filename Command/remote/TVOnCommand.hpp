#ifndef TV_ON_COMMAND_H
#define TV_ON_COMMAND_H

#include "Command.hpp"
#include "TV.hpp"
#include <string>

class TVOnCommand :public Command {

public:
	TVOnCommand(TV *t) : tv(t) { }
	void execute() override { tv->on(); }
	std::string getClassName() const override { return className; }
private:
	TV *tv;
	std::string className = "TVOnCommand";
};

#endif /* TV_ON_COMMAND_H */
