#include "Singleton.hpp"
#include "CoolerSingleton.hpp"
#include "HotterSingleton.hpp"
#include <iostream>

int main()
{
	Singleton *foo = CoolerSingleton::getInstance();
	Singleton *bar = HotterSingleton::getInstance();
	std::cout << foo << '\n';
	std::cout << bar << '\n';
	
	return 0;
}
