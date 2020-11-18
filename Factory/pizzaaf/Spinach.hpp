#ifndef SPINACH_H
#define SPINACH_H

#include "Veggies.hpp"
#include <string>

class Spinach : public Veggies {
	public:
		std::string toString() const override { return "Spinach"; }
};

#endif /* SPINACH_H */
