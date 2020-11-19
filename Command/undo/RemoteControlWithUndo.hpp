#ifndef REMOTE_CONTROL_WITH_UNDO_H
#define REMOTE_CONTROL_WITH_UNDO_H

#include "Command.hpp"
#include "NoCommand.hpp"
#include <cstddef>
#include <ostream>
#include <memory>
#include <string>

class RemoteControlWithUndo {
	friend std::ostream& operator<<(std::ostream &, const RemoteControlWithUndo &remote);
	public:
		RemoteControlWithUndo () = default; // see private section for in-class initialization
		void setCommand(Command::cvec_size slot, Command *onCommand, Command *offCommand);
		void onButtonWasPushed(Command::cvec_size slot);
		void offButtonWasPushed(Command::cvec_size slot);
		void undoButtonWasPushed() { undoCommand->undo(); }
	protected:
		// Note: in-class initialization
		constexpr static Command::cvec_size SIZE = 7;
		std::shared_ptr<NoCommand> noCommand = std::make_shared<NoCommand>(); // shared_ptr make sense
		Command *undoCommand = noCommand.get(); // use get() with caution; O.K. here as there is no ownership
		Command::command_vec onCommands = Command::command_vec(SIZE, noCommand.get());
		Command::command_vec offCommands = Command::command_vec(SIZE, noCommand.get());
};

inline
void
RemoteControlWithUndo::onButtonWasPushed(Command::cvec_size slot)
{
	if (onCommands[slot] != nullptr) { // null object check
		onCommands[slot]->execute();
		undoCommand = onCommands[slot];
	}
}

inline
void
RemoteControlWithUndo::offButtonWasPushed(Command::cvec_size slot)
{
	if (offCommands[slot] != nullptr) {
		offCommands[slot]->execute();
		undoCommand = offCommands[slot];
	}
}

inline
void
RemoteControlWithUndo::setCommand(Command::cvec_size slot, Command *onCommand, Command *offCommand)
{
	onCommands[slot] = onCommand;
	offCommands[slot] = offCommand;
}

inline
std::ostream& operator<<(std::ostream &os, const RemoteControlWithUndo &remote)
{
	os << "\n------ Remote Control ------\n";
	for (Command::cvec_size i = 0; i < remote.onCommands.size(); ++i) {
		os << "[slot " << i << "] " << remote.onCommands[i]->getClassName()
			<< "\t" << remote.offCommands[i]->getClassName() << '\n';
	}
	os << "[undo] " << remote.undoCommand->getClassName() << '\n';
	return os;
}

#endif /* REMOTE_CONTROL_WITH_UNDO_H */
