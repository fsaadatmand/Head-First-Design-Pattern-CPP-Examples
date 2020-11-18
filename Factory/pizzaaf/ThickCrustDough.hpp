#ifndef THICK_CRUST_DOUGH_H
#define THICK_CRUST_DOUGH_H

#include "Dough.hpp"
#include <string>

class ThickCrustDough : public Dough {
	public:
		std::string toString() const override { return "Thick Crust dough"; } 
};

#endif /* THICK_CRUST_DOUGH_H */
