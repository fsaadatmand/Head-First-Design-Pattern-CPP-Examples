#ifndef REMOTE_CONTROL_H
#define REMOTE_CONTROL_H

#include "Command.hpp"
#include "NoCommand.hpp"
#include <ostream>
#include <memory>
#include <string>

class RemoteControl {
	friend std::ostream& operator<<(std::ostream &, const RemoteControl &remote);
	public:
		RemoteControl () = default; // see private section for inclass initialization
		void setCommand(Command::cvec_size slot, Command *onCommand, Command *offCommand);
		void onButtonWasPushed(Command::cvec_size slot) const;
		void offButtonWasPushed(Command::cvec_size slot) const;
	protected:
		constexpr static Command::cvec_size SIZE = 7; // to avoid magic numbers
		std::shared_ptr<NoCommand> noCommand = std::make_shared<NoCommand>(); // shared ownership
		Command::command_vec onCommands = Command::command_vec(SIZE, noCommand.get()); // construct vector
		Command::command_vec offCommands = Command::command_vec(SIZE, noCommand.get());
};

inline
void
RemoteControl::onButtonWasPushed(Command::cvec_size slot) const
{
	if (onCommands[slot] != nullptr) // null object check
		onCommands[slot]->execute();
}

inline
void
RemoteControl::offButtonWasPushed(Command::cvec_size slot) const
{
	if (offCommands[slot] != nullptr)
		offCommands[slot]->execute();
}

inline
void
RemoteControl::setCommand(Command::cvec_size slot, Command *onCommand, Command *offCommand)
{
	onCommands[slot] = onCommand;
	offCommands[slot] = offCommand;
}

inline
std::ostream& operator<<(std::ostream &os, const RemoteControl &remote)
{
	os << "\n------ Remote Control ------\n";
	for (Command::cvec_size i = 0; i < remote.onCommands.size(); ++i) {
			os << "[slot " << i << "] " << remote.onCommands[i]->getClassName()
			   << "\t" << remote.offCommands[i]->getClassName() << '\n';
		}
	return os;
}

#endif /* REMOTE_CONTROL_H */
