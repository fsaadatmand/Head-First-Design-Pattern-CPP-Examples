#ifndef SIMPLE_PIZZA_FACTORY_H
#define SIMPLE_PIZZA_FACTORY_H

#include "CheesePizza.hpp"
#include "ClamPizza.hpp"
#include "PepperoniPizza.hpp"
#include "Pizza.hpp"
#include "VeggiePizza.hpp"
#include <memory>
#include <string>

class SimplePizzaFactory {
	public:
		std::unique_ptr<Pizza> createPizza(std::string_view);
};

inline
std::unique_ptr<Pizza>
SimplePizzaFactory::createPizza(std::string_view type)
{
	if (type == "cheese")
		return std::make_unique<CheesePizza>();
	if (type == "pepperoni")
		return  std::make_unique<PepperoniPizza>();
	if (type == "clam")
		return std::make_unique<ClamPizza>();
	if (type == "veggie")
		return std::make_unique<VeggiePizza>();
	return nullptr; // no match
}

#endif /* SIMPLE_PIZZA_FACTORY_H */
