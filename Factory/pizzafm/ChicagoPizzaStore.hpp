#ifndef Chicago_PIZZA_STORE_H
#define Chicago_PIZZA_STORE_H

#include "ChicagoStyleCheesePizza.hpp"
#include "ChicagoStyleClamPizza.hpp"
#include "ChicagoStylePepperoniPizza.hpp"
#include "ChicagoStyleVeggiePizza.hpp"
#include "PizzaStore.hpp"
#include "Pizza.hpp"
#include <memory>
#include <string_view>

class ChicagoPizzaStore : public PizzaStore {
	protected:
		std::unique_ptr<Pizza> createPizza(std::string_view item) override;
};

inline
std::unique_ptr<Pizza>
ChicagoPizzaStore::createPizza(std::string_view item) {
	if (item == "cheese")
		return std::make_unique<ChicagoStyleCheesePizza>();
	if (item == "veggie")
		return std::make_unique<ChicagoStyleVeggiePizza>();
	if (item == "clam")
		return std::make_unique<ChicagoStyleClamPizza>();
	if (item == "pepperoni")
		return std::make_unique<ChicagoStylePepperoniPizza>();
	return nullptr;
}

#endif /* ifndef Chicago_PIZZA_STORE_H */
