#ifndef DOUGH_H
#define DOUGH_H

#include <string>

class Dough {
	public:
		virtual ~Dough() = default;
		virtual std::string toString() const = 0;
};

#endif /* DOUGH_H */
