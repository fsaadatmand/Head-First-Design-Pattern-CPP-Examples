#include "ChocolateBoiler.hpp"
#include <iostream>
#include <memory>

int main()
{
	ChocolateBoiler *boiler = ChocolateBoiler::getInstance();
	boiler->fill();
	boiler->boil();
	boiler->drain();
	[[maybe_unused]] ChocolateBoiler *boiler2 = ChocolateBoiler::getInstance();
	return 0;
}
