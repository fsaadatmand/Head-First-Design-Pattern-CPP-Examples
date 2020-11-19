#ifndef HOTTUB_ON_COMMAND_H
#define HOTTUB_ON_COMMAND_H

#include "Command.hpp"
#include "Hottub.hpp"
#include "string"

class HottubOnCommand : public Command {
	public:
		HottubOnCommand(Hottub *ht) : hottub(ht) { }
		void execute() override;
		void undo() override { hottub->off(); }
		std::string getClassName() const override { return className; }
	private:
		Hottub *hottub;
		std::string className = "HottubOnCommand";
};

inline
void
HottubOnCommand::execute()
{
	hottub->on();
	hottub->setTemperature(104);
	hottub->circulate();
}

#endif /* HOTTUB_ON_COMMAND_H */
