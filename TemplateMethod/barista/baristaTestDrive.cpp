#include "CaffeineBeverage.h"
#include "Coffee.h"
#include "CoffeeWithHook.h"
#include "Tea.h"
#include "TeaWithHook.h"

int main()
{
	auto tea = Tea();
	auto coffee = Coffe();

	std::cout << "\nMaking tea...\n";
	tea.prepareRecipe();

	std::cout << "\nMaking coffee...\n";
	coffee.prepareRecipe();

	auto teaHook = TeaWithHook();
	auto coffeeHook = CoffeeWithHook();
	
	std::cout << "\nMaking tea...\n";
	teaHook.prepareRecipe();

	std::cout << "\nMaking coffee...\n";
	coffeeHook.prepareRecipe();

	return 0;
}
