#ifndef STEREO_ON_WITH_CD_COMMAND_H
#define STEREO_ON_WITH_CD_COMMAND_H

#include "Command.hpp"
#include "Stereo.hpp"
#include <string>

class StereoOnWithCDCommand : public Command {
	public:
		StereoOnWithCDCommand(Stereo *s) : stereo(s) { }
	 	void execute() override;
		std::string getClassName() const override { return className; };
	private:
		Stereo *stereo;
		std::string className = "StereoOnWithCDCommand";

};

inline
void
StereoOnWithCDCommand::execute()
{
	stereo->on();
	stereo->setCD();
	stereo->setVolume(11);
}
#endif /* STEREO_ON_WITH_CD_COMMAND_H */
