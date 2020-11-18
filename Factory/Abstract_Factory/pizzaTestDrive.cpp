#include "Pizza.hpp"
#include "PizzaStore.hpp"
#include "NYPizzaStore.hpp"
#include "ChicagoPizzaStore.hpp"
#include "Veggies.hpp"
#include <iostream>
#include <memory>
#include <vector>

int main() {
	// create stores
	std::unique_ptr<PizzaStore> nyStore = std::make_unique<NYPizzaStore>();
	std::unique_ptr<PizzaStore> chicagoStore = std::make_unique<ChicagoPizzaStore>();

	// order different pizzas from different stores
	std::unique_ptr<Pizza> pizza = nyStore->orderPizza("cheese");
	std::cout << "Ethan ordered a " << *pizza << "\n\n";

	pizza = chicagoStore->orderPizza("cheese");
	std::cout << "Joel ordered a " << *pizza << "\n\n";

	pizza = nyStore->orderPizza("clam");
	std::cout << "Ethan ordered a " << *pizza << "\n\n";

	pizza = chicagoStore->orderPizza("clam");
	std::cout << "Joel ordered a " << *pizza << "\n\n";

	pizza = nyStore->orderPizza("pepperoni");
	std::cout << "Ethan ordered a " << *pizza << "\n\n";

	pizza = chicagoStore->orderPizza("pepperoni");
	std::cout << "Joel ordered a " << *pizza << "\n\n";

	pizza = nyStore->orderPizza("veggie");
	std::cout << "Ethan ordered a " << *pizza << "\n\n";

	pizza = chicagoStore->orderPizza("veggie");
	std::cout << "Joel ordered a " << *pizza << "\n\n";
	return 0;
}
