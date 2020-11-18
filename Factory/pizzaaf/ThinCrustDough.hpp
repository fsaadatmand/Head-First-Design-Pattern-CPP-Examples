#ifndef THIN_CRUST_DOUGH_H
#define THIN_CRUST_DOUGH_H

#include "Dough.hpp"
#include <string>

class ThinCrustDough : public Dough {
	public:
		std::string toString() const override { return "Thin Crust dough"; } 
};

#endif /* THIN_CRUST_DOUGH_H */
