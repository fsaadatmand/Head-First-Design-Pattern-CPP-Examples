#ifndef MUSHROOM_H
#define MUSHROOM_H

#include "Veggies.hpp"
#include <string>

class Mushroom : public Veggies {
	public:
		std::string toString() const override { return "Mushroom"; }
};

#endif /* MUSHROOM_H */
