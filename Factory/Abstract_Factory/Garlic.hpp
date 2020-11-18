#ifndef GARLIC_H
#define GARLIC_H

#include "Veggies.hpp"
#include <string>

class Garlic : public Veggies {
	public:
		std::string toString() const override { return "Garlic"; }
};

#endif /* GARLIC_H */
