#ifndef PEPPERONI_H
#define PEPPERONI_H

#include <string>

class Pepperoni {
	public:
		virtual ~Pepperoni () = default;
		virtual std::string toString() const = 0;
};

#endif /* PEPPERONI_H */
