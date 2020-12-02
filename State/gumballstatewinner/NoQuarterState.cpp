#include "NoQuarterState.h"
#include "GumballMachine.h"
#include <iostream>
#include <ostream>

NoQuarterState::NoQuarterState(GumballMachine *gbm) : gumballMachine(gbm) { } 

void
NoQuarterState::insertQuarter()
{
	std::cout << "You inseted a quarter\n";
	gumballMachine->setState(gumballMachine->getHasQuarterState());
}

void
NoQuarterState::ejectQuarter()
{
	std::cout << "You haven't inseted a quarter\n";
}

void
NoQuarterState::turnCrank()
{
	std::cout << "You turned, but there's no quarter\n";
}

void
NoQuarterState::dispense()
{
	std::cout << "You need to pay first\n";
}

void
NoQuarterState::refill() { }

void
NoQuarterState::toString(std::ostream &os) const
{
	os << "waiting for turn of crank";
}
