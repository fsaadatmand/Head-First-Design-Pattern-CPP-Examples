#ifndef PIZZA_STORE_H
#define PIZZA_STORE_H

#include "Pizza.hpp"
#include <memory>
#include <string_view>

class PizzaStore {
	public:
		virtual ~PizzaStore() = default;
		std::unique_ptr<Pizza> pizzaOrder(std::string_view type);
	protected:
		virtual std::unique_ptr<Pizza> createPizza(std::string_view item) = 0; // factory method
};

inline
std::unique_ptr<Pizza>
PizzaStore::pizzaOrder(std::string_view type)
{
	auto pizza = createPizza(type);
	pizza->prepare();
	pizza->bake();
	pizza->cut();
	pizza->box();
	return pizza;
}

#endif /* ifndef PIZZA_STORE_H */
