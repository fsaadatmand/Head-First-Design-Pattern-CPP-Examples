#include "GumballMachine.h"
#include "WinnerState.h"
#include <iostream>

WinnerState::WinnerState(GumballMachine *gbm) : gumballMachine(gbm) { }

void
WinnerState::insertQuarter()
{
	std::cout << "Please wait, we're already giving you a Gumball\n";
}

void
WinnerState::ejectQuarter()
{
	std::cout << "Please wait, we're already giving you a Gumball\n";
}

void
WinnerState::turnCrank() {
	std::cout << "Turning again doesn't get you another gumball!\n";
}

void
WinnerState::dispense()
{
	gumballMachine->releaseBall();
	if (gumballMachine->getCount() == 0)
		gumballMachine->setState(gumballMachine->getSoldOutState());
	else {
		gumballMachine->releaseBall();
		std::cout << "YOU'RE A WINNER! You got two gumballs for your quarter\n";
		if (gumballMachine->getCount() > 0)
			gumballMachine->setState(gumballMachine->getNoQuarterState());
		else {
			std::cout << "Oops, out of gumballs!\n";
			gumballMachine->setState(gumballMachine->getSoldOutState());
		}
	}
}

void
WinnerState::refill() { }


void
WinnerState::toString(std::ostream &os) const
{
	os << "despensing two gumballs for your quarter, because YOU'RE A WINNER!";
}

