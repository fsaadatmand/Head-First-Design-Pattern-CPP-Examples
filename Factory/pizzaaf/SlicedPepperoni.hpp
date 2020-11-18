#ifndef SLICED_PEPPERONI_H
#define SLICED_PEPPERONI_H

#include "Pepperoni.hpp"
#include <string>

class SlicedPepperoni : public Pepperoni {
	public:
		std::string toString() const override { return "Pepperoni"; }
};

#endif /* SLICED_PEPPERONI_H */
