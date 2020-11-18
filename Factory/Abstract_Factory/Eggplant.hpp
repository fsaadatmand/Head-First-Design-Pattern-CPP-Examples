#ifndef EGGPLANT_H
#define EGGPLANT_H

#include "Veggies.hpp"
#include <string>

class Eggplant : public Veggies {
	public:
		std::string toString() const override { return "Eggplant"; }
};

#endif /* EGGPLANT_H */
