#ifndef NY_PIZZA_STORE_H
#define NY_PIZZA_STORE_H

#include "NYStyleCheesePizza.hpp"
#include "NYStyleClamPizza.hpp"
#include "NYStylePepperoniPizza.hpp"
#include "NYStyleVeggiePizza.hpp"
#include "NYStyleCheesePizza.hpp"
#include "Pizza.hpp"
#include "PizzaStore.hpp"
#include <memory>
#include <string>

class NYPizzaStore : public PizzaStore {
	protected:
		std::unique_ptr<Pizza> createPizza(std::string_view item) override;
};

inline
std::unique_ptr<Pizza>
NYPizzaStore::createPizza(std::string_view item) {
	if (item == "cheese")
		return std::make_unique<NYStyleCheesePizza>();
	if (item == "veggie")
		return std::make_unique<NYStyleVeggiePizza>();
	if (item == "clam")
		return std::make_unique<NYStyleClamPizza>();
	if (item == "pepperoni")
		return std::make_unique<NYStylePepperoniPizza>();
	return nullptr;
}

#endif /* ifndef NY_PIZZA_STORE_H */
