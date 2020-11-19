#ifndef SIMPLE_REMOTE_CONTROL_H
#define SIMPLE_REMOTE_CONTROL_H

// Invoker

#include "Command.hpp"
#include <memory>

class SimpleRemoteControl {
	public:
		SimpleRemoteControl () = default;
		void setCommand(Command *command) { slot = command; }
		void buttonWasPressed() { slot->execute(); }
	private:
		Command *slot;
};

#endif /* SIMPLE_REMOTE_CONTROL_H */
