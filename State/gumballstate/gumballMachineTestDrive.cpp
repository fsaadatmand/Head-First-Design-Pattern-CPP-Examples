#include "GumballMachine.h"
#include <iostream>

int main()
{
	auto gumballMachine = GumballMachine(2);

	std::cout << gumballMachine << '\n';

	gumballMachine.insertQuarter();
	gumballMachine.turnCrank();

	std::cout << gumballMachine << '\n';
	
	gumballMachine.insertQuarter();
	gumballMachine.turnCrank();
	gumballMachine.insertQuarter();
	gumballMachine.turnCrank();

	gumballMachine.refill(5);
	gumballMachine.insertQuarter();
	gumballMachine.turnCrank();

	std::cout << gumballMachine;

	return 0;
}
