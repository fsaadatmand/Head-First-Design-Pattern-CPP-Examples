#ifndef FRESH_CLAMS_H
#define FRESH_CLAMS_H

#include "Clams.hpp"
#include <string>

class FreshClams : public Clams {
	public:
		std::string toString() const override { return "Fresh Clams from Long Island Sound"; }
};

#endif /* FRESH_CLAMS_H */
