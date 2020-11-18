#ifndef SAUCE_H
#define SAUCE_H

#include <string>

class Sauce {
	public:
		virtual ~Sauce() = default;
		virtual std::string toString() const = 0;
};

#endif /* SAUCE_H */
