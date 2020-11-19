#ifndef STEREO_OFF_COMMAND_H
#define STEREO_OFF_COMMAND_H

#include "Command.hpp"
#include "Stereo.hpp"
#include <string>

class StereoOffCommand : public Command {
	public:
		StereoOffCommand(Stereo *s) : stereo(s) { }
		void execute() override { stereo->off(); }
		void undo() override { stereo->on(); }
		std::string getClassName() const override { return className; }
	private:
		Stereo *stereo;
		std::string className = "StereoOffCommand";
};

#endif /* STEREO_OFF_COMMAND_H */
