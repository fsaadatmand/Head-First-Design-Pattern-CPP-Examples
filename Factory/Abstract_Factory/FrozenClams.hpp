#ifndef FROZEN_CLAMS_H
#define FROZEN_CLAMS_H

#include "Clams.hpp"
#include <string>

class FrozenClams : public Clams {
	public:
		std::string toString() const override { return "Frozen Clams from Chespeake Bay"; }
};

#endif /* FROZEN_CLAMS_H */
