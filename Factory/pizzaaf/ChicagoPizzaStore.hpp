#ifndef CHICAGO_PIZZA_STORE_H
#define CHICAGO_PIZZA_STORE_H

#include "ClamPizza.hpp"
#include "CheesePizza.hpp"
#include "ChicagoPizzaIngredientFactory.hpp"
#include "Pizza.hpp"
#include "PizzaIngredientFactory.hpp"
#include "PizzaStore.hpp"
#include "Pepperoni.hpp"
#include "PepperoniPizza.hpp"
#include "VeggiePizza.hpp"
#include <memory>
#include <string>

class ChicagoPizzaStore : public PizzaStore {
	protected:
		std::unique_ptr<Pizza> createPizza(std::string_view item) override;
};

inline
std::unique_ptr<Pizza>
ChicagoPizzaStore::createPizza(std::string_view item)
{
		std::unique_ptr<Pizza> pizza = nullptr;
		std::unique_ptr<PizzaIngredientFactory> ingredientFactory =
		std::make_unique<ChicagoPizzaIngredientFactory>();

		if (item == "cheese") {
			pizza = std::make_unique<CheesePizza>(std::move(ingredientFactory));
			pizza->setName("Chicago Style Cheese Pizza");
		} else if (item == "veggie") {
			pizza = std::make_unique<VeggiePizza>(std::move(ingredientFactory));
			pizza->setName("Chicago Style Veggie Pizza");
		} else if (item == "clam") {
			pizza = std::make_unique<ClamPizza>(std::move(ingredientFactory));
			pizza->setName("Chicago Style Clam Pizza");
		} else if (item == "pepperoni") {
			pizza = std::make_unique<PepperoniPizza>(std::move(ingredientFactory));
			pizza->setName("Chicago Style Pepperoni Pizza");
		}
		return pizza;
}

#endif /* ifndef CHICAGO_PIZZA_STORE_H */
