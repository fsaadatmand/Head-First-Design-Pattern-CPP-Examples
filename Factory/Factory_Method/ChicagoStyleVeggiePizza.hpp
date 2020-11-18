#ifndef CHICAGO_STYLE_VEGGIE_PIZZA_H
#define CHICAGO_STYLE_VEGGIE_PIZZA_H

#include "Pizza.hpp"

class ChicagoStyleVeggiePizza : public Pizza {
	public:
		ChicagoStyleVeggiePizza ();
};

inline
ChicagoStyleVeggiePizza::ChicagoStyleVeggiePizza()
{
	name = "Chicago Deep Dish Veggie Pizza";
	dough = "Extra Thick Crust Dough";
	sauce = "Plum Tomato Sauce";
	toppings.push_back("Shredded Mozzarella Cheese");
	toppings.push_back("Black Olives");
	toppings.push_back("Spinach");
	toppings.push_back("Eggplant");
}

#endif /* CHICAGO_STYLE_VEGGIE_PIZZA_H */
