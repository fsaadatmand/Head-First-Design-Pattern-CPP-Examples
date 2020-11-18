#ifndef RED_PEPPER_H_H
#define RED_PEPPER_H_H

#include "Veggies.hpp"
#include <string>

class RedPepper : public Veggies {
	public:
		std::string toString() const override { return "RedPepper"; }
};

#endif /* RED_PEPPER_H_H */
