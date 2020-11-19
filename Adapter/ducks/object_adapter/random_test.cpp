#include <cmath>
#include <iostream>
#include <random>
#include <ctime>
#include "SimpleRandom.hpp"

int main()
{
	std::default_random_engine e(std::time(nullptr));
	std::uniform_int_distribution<unsigned> u(0,5);
	
	e.discard(1);
	for (size_t i = 0; i < 10; i++)
		std::cout << ' ' << u(e);
	std::cout << '\n';

	auto rand = SimpleRandom();
	for (size_t i = 0; i < 10; i++)
		std::cout << rand.nextInt(5);
	std::cout << '\n';
	return 0;
}
