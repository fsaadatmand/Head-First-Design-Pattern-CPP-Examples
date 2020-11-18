#ifndef PARMESAN_CHEESE_H
#define PARMESAN_CHEESE_H

#include "Cheese.hpp"
#include <string>

class ParmesanCheese : public Cheese {
	public:
		std::string toString() const override { return "Shredded Parmesan"; }
};

#endif /* PARMESAN_CHEESE_H */
