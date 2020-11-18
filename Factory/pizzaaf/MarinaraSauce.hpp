#ifndef MARINARA_SAUCE_H
#define MARINARA_SAUCE_H

#include "Sauce.hpp"
#include <string>

class MarinaraSauce : public Sauce {
	public:
		std::string toString() const override { return "Marinara Sauce"; }
};

#endif /* MARINARA_SAUCE_H */
