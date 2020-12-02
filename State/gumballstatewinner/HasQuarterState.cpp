#include "GumballMachine.h"
#include "HasQuarterState.h"
#include "SimpleRandom.h"
#include <iostream>

HasQuarterState::HasQuarterState(GumballMachine *gbm)
	: gumballMachine(gbm) { }

void
HasQuarterState::insertQuarter()
{
	std::cout << "You can't insert another quarter\n";
}

void
HasQuarterState::ejectQuarter()
{
	std::cout << "Quarter return\n";
	gumballMachine->setState(gumballMachine->getNoQuarterState());
}

void
HasQuarterState::turnCrank()
{
	std::cout << "You turned...\n";
	if (auto winner = randomWinner.nextInt(10);
			(winner == 0) && (gumballMachine->getCount() > 1))
		gumballMachine->setState(gumballMachine->getWinnerState());
	else
		gumballMachine->setState(gumballMachine->getSoldState());
}

void
HasQuarterState::dispense()
{
	std::cout << "No gumball dispensed\n";
}

void
HasQuarterState::refill() { }

void
HasQuarterState::toString(std::ostream &os) const
{
	os << "waiting for turn of crank";
}


