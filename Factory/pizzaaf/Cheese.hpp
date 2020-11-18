#ifndef CHEESE_H
#define CHEESE_H

#include <string>

class Cheese {
	public:
		virtual ~Cheese() = default;
		virtual std::string toString() const = 0;
};

#endif /* CHEESE_H */
