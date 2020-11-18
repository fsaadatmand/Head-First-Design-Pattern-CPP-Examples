#ifndef CLAMS_H
#define CLAMS_H

#include <string>

class Clams {
	public:
		virtual ~Clams() = default;
		virtual std::string toString() const = 0;
};

#endif /* CLAMS_H */
