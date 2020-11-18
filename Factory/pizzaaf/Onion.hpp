#ifndef ONION_H
#define ONION_H

#include "Veggies.hpp"
#include <string>

class Onion : public Veggies {
	public:
		std::string toString() const override { return "Onion"; }
};

#endif /* ONION_H */
