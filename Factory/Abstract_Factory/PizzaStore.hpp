#ifndef PIZZA_STORE_H
#define PIZZA_STORE_H

#include "Pizza.hpp"
#include <memory>
#include <string_view>

class PizzaStore {
	public:
		virtual ~PizzaStore() = default;
		std::unique_ptr<Pizza> orderPizza(std::string_view item) {
			auto pizza = createPizza(item);
			std::cout << "--- Making a " << pizza->getName() << " ---\n";
			pizza->prepare();
			pizza->bake();
			pizza->cut();
			pizza->box();
			return pizza;
		}
	protected:
		virtual std::unique_ptr<Pizza> createPizza(std::string_view item) = 0;
};

#endif /* ifndef PIZZA_STORE_H */
