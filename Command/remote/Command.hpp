#ifndef COMMAND_H
#define COMMAND_H

#include <string>
#include <vector>

class Command {
	public:
		using command_vec = std::vector<Command *>; // ptr to Command* vector type
		using cvec_size = std::vector<Command *>::size_type; // ptr to command vector size type 
		virtual ~Command () = default;
		virtual void execute() = 0;
		virtual std::string getClassName() const = 0;
};

#endif /* COMMAND_H */
