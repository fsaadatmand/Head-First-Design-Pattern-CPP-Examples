#ifndef MACRO_COMMAND_H
#define MACRO_COMMAND_H

#include "Command.hpp"
#include <string>

class MacroCommand : public Command {
	public:
		MacroCommand(const Command::command_vec &c) : commands(c) { }
		void execute() override;
		void undo() override;
		std::string getClassName() const override { return className; }
	private:
		Command::command_vec commands;
		std::string className = "MacroCommand";
};

inline
void
MacroCommand::execute()
{
	for (const auto &command : commands)
		command->execute();
}

inline
void
MacroCommand::undo()
{
	for (auto i = commands.size() - 1; i >= 0; --i)
		commands[i]->undo();
}

#endif /* MACRO_COMMAND_H */
