#ifndef BLACK_OLIVES_H
#define BLACK_OLIVES_H

#include "Veggies.hpp"
#include <string>

class BlackOlives : public Veggies {
	public:
		std::string toString() const override { return "BlackOlives"; }
};

#endif /* BLACK_OLIVES_H */
