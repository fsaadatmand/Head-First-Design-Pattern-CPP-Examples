#ifndef TV_OFF_COMMAND_H
#define TV_OFF_COMMAND_H

#include "Command.hpp"
#include "TV.hpp"
#include <string>

class TVOffCommand :public Command {

public:
	TVOffCommand(TV *t) : tv(t) { }
	void execute() override { tv->off(); }
	std::string getClassName() const override { return className; }
private:
	TV *tv;
	std::string className = "TVOffCommand";
};

#endif /* TV_OFF_COMMAND_H */
