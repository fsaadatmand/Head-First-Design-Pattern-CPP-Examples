#ifndef NY_PIZZA_STORE_H
#define NY_PIZZA_STORE_H

#include "ClamPizza.hpp"
#include "CheesePizza.hpp"
#include "NYPizzaIngredientFactory.hpp"
#include "Pizza.hpp"
#include "PizzaIngredientFactory.hpp"
#include "PizzaStore.hpp"
#include "Pepperoni.hpp"
#include "PepperoniPizza.hpp"
#include "VeggiePizza.hpp"
#include <memory>
#include <string>

class NYPizzaStore : public PizzaStore {
	protected:
		std::unique_ptr<Pizza> createPizza(std::string_view item) override;
};

inline
std::unique_ptr<Pizza>
NYPizzaStore::createPizza(std::string_view item) {
		std::unique_ptr<Pizza> pizza = nullptr;
		std::unique_ptr<PizzaIngredientFactory> ingredientFactory =
		std::make_unique<NYPizzaIngredientFactory>();

		if (item == "cheese") {
			pizza = std::make_unique<CheesePizza>(std::move(ingredientFactory));
			pizza->setName("NY Style Cheese Pizza");
		} else if (item == "veggie") {
			pizza = std::make_unique<VeggiePizza>(std::move(ingredientFactory));
			pizza->setName("NY Style Veggie Pizza");
		} else if (item == "clam") {
			pizza = std::make_unique<ClamPizza>(std::move(ingredientFactory));
			pizza->setName("NY Style Clam Pizza");
		} else if (item == "pepperoni") {
			pizza = std::make_unique<PepperoniPizza>(std::move(ingredientFactory));
			pizza->setName("NY Style Pepperoni Pizza");
		}
		return pizza;
}

#endif /* ifndef NY_PIZZA_STORE_H */
