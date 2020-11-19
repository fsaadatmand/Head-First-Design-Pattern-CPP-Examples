#include "Turkey.hpp"
#include "DuckAdapter.hpp"
#include "MallardDuck.hpp"
#include <iostream>

int main()
{
	auto duck = new MallardDuck();
	Turkey *duckAdapter = new DuckAdapter(duck);
	for (int i = 0; i < 10; ++i) {
		std::cout << "The DuckAdapter says...\n";
		duckAdapter->gobble();
		duckAdapter->fly();
	}
	return 0;
}
