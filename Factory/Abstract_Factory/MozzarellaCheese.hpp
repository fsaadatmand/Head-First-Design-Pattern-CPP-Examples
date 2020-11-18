#ifndef MOZZARELLA_CHEESE_H
#define MOZZARELLA_CHEESE_H

#include "Cheese.hpp"
#include <string>

class MozzarellaCheese : public Cheese {
	public:
		std::string toString() const override { return "Shredded Mozzarella"; }

};

#endif /* MOZZARELLA_CHEESE_H */
