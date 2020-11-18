#ifndef CLAM_PIZZA_H
#define CLAM_PIZZA_H

#include "Pizza.hpp"

class ClamPizza : public Pizza {
public:
	ClamPizza();
};

inline
ClamPizza::ClamPizza()
{
		name = "Clam Pizza";
		dough = "Thin Crust Dough";
		sauce = "Marinara sauce";
		toppings.push_back("Grated Regiano Clam");
		toppings.push_back("Fresh Clams");
}
#endif /* CLAM_PIZZA_H */
