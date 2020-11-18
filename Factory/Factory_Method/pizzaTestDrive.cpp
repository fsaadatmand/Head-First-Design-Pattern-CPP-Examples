#include "PizzaStore.hpp"
#include "NYPizzaStore.hpp"
#include "ChicagoPizzaStore.hpp"
#include <iostream>
#include <memory>

int main() {
	std::unique_ptr<PizzaStore> nyStore = std::make_unique<NYPizzaStore>();
	std::unique_ptr<PizzaStore> chicagoStore = std::make_unique<ChicagoPizzaStore>();

	std::unique_ptr<Pizza> pizza = nyStore->pizzaOrder("cheese");
	std::cout << "Ethan orderd a " << pizza->getName() << "\n\n";

	pizza = chicagoStore->pizzaOrder("cheese");
	std::cout << "Joel orderd a " << pizza->getName() << "\n\n";

	pizza = nyStore->pizzaOrder("clam");
	std::cout << "Ethan orderd a " << pizza->getName() << "\n\n";

	pizza = chicagoStore->pizzaOrder("clam");
	std::cout << "Joel orderd a " << pizza->getName() << "\n\n";

	pizza = chicagoStore->pizzaOrder("pepperoni");
	std::cout << "Ethan orderd a " << pizza->getName() << "\n\n";

	pizza = chicagoStore->pizzaOrder("pepperoni");
	std::cout << "Joel orderd a " << pizza->getName() << "\n\n";

	pizza = chicagoStore->pizzaOrder("veggie");
	std::cout << "Ethan orderd a " << pizza->getName() << "\n\n";

	pizza = chicagoStore->pizzaOrder("veggie");
	std::cout << "Joel orderd a " << pizza->getName() << "\n\n";
	return 0;
}
