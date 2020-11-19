#ifndef STEREO_ON_COMMAND_H
#define STEREO_ON_COMMAND_H

#include "Command.hpp"
#include "Stereo.hpp"
#include <string>

class StereoOnCommand : public Command {
	public:
		StereoOnCommand(Stereo *s) : stereo(s) { }
		void execute() override { stereo->on(); }
		void undo() override { stereo->off(); }
		std::string getClassName() const override { return className; }
	private:
		Stereo *stereo;
		std::string className = "StereoOnCommand";
};

#endif /* STEREO_ON_COMMAND_H */
