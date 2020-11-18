#include "Pizza.hpp"
#include "PizzaStore.hpp"
#include "SimplePizzaFactory.hpp"
#include <memory>

int main()
{
	auto factory = std::make_unique<SimplePizzaFactory>(); // create factory
	auto pizzaStore = PizzaStore(std::move(factory)); // create store and pass it factory
	auto pizza = pizzaStore.orderPizza("clam"); // order pizza from store
	// one-liner:
	// auto pizza = PizzaStore(std::make_unique<SimplePizzaFactory>()).orderPizza("clam");
	return 0;
}
