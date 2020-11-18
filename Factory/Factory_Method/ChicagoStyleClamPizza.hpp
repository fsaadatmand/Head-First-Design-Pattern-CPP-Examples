#ifndef CHICAGO_STYLE_CLAM_PIZZA_H
#define CHICAGO_STYLE_CLAM_PIZZA_H

#include "Pizza.hpp"
#include <iostream>

class ChicagoStyleClamPizza : public Pizza {
	public:
		ChicagoStyleClamPizza ();
		void cut() const override;
};

inline
ChicagoStyleClamPizza::ChicagoStyleClamPizza()
{
	name = "Chicago Style Clam Pizza";
	dough = "Extra Thick Crust Dough";
	sauce = "Plum Tomato Sauce";
	toppings.push_back("Shredded Mozzarella Cheese");
	toppings.push_back("Frozen Clams from Chesapeake Bay");
}

inline
void
ChicagoStyleClamPizza::cut() const {
	std::cout << "Cutting the pizza into square slices";
}

#endif /* CHICAGO_STYLE_CLAM_PIZZA_H */
