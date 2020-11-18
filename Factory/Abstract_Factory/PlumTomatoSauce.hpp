#ifndef PLUM_TOMATO_SAUCE_H
#define PLUM_TOMATO_SAUCE_H

#include "Sauce.hpp"
#include <string>

class PlumTomatoSauce : public Sauce {
	public:
		std::string toString() const override { return "Tomato sauce with plum tomatoes"; }
};

#endif /* PLUM_TOMATO_SAUCE_H */
