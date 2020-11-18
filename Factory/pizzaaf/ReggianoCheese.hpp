#ifndef REGGIANO_CHEESE_H
#define REGGIANO_CHEESE_H

#include "Cheese.hpp"
#include <string>

class ReggianoCheese : public Cheese {
	public:
		std::string toString() const override { return "Reggiano Cheese"; }
};

#endif /* REGGIANO_CHEESE_H */
