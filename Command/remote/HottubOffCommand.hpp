#ifndef HOTTUB_OFF_COMMAND_H
#define HOTTUB_OFF_COMMAND_H

#include "Command.hpp"
#include "Hottub.hpp"
#include "string"

class HottubOffCommand : public Command {
	public:
		HottubOffCommand(Hottub *ht) : hottub(ht) { }
		void execute() override;
		std::string getClassName() const override { return className; }
	private:
		Hottub *hottub;
		std::string className = "HottubOffCommand";
};

inline
void HottubOffCommand::execute()
{
	hottub->off();
	hottub->cool();
	hottub->bubblesOff();
}

#endif /* HOTTUB_OFF_COMMAND_H */
