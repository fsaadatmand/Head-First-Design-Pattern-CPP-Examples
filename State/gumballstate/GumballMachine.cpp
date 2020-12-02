#include "GumballMachine.h"
#include "NoQuarterState.h"
#include "HasQuarterState.h"
#include "SoldOutState.h"
#include "SoldState.h"
#include <iostream>
#include <memory>
#include <ostream>

class State;

GumballMachine::GumballMachine(int numberOfBalls)
	: soldOutState(std::make_unique<SoldOutState>(this)),
	  noQuarterState(std::make_unique<NoQuarterState>(this)),
	  hasQuarterState(std::make_unique<HasQuarterState>(this)),
	  soldState(std::make_unique<SoldState>(this)), count(numberOfBalls)
{
	state = (count > 0) ? noQuarterState.get() : soldOutState.get();
}

void
GumballMachine::insertQuarter()
{
	state->insertQuarter();
}

void
GumballMachine::ejectQuarter()
{
	state->ejectQuarter();
}

void
GumballMachine::turnCrank()
{
	state->turnCrank();
	state->dispense();
}

void
GumballMachine::releaseBall()
{
	std::cout << "A gumball comes rolling out the slot...\n";
	if (count > 0)
		--count;
}

int
GumballMachine::getCount() const
{
	return count;
}

void
GumballMachine::refill(int c)
{
	count += c;
	std::cout << "The gumball machine was just refilled; its new count is: "
		      << count << '\n';
	state->refill();
}

void
GumballMachine::setState(State *s)
{
	state = s;
}

State*
GumballMachine::getState() const
{
	return state;
}


State* 
GumballMachine::getNoQuarterState() const
{
	return noQuarterState.get();
}

State*
GumballMachine::getHasQuarterState() const
{
	return hasQuarterState.get();
}

State* 
GumballMachine::getSoldOutState() const
{
	return soldOutState.get();
}

State* 
GumballMachine::getSoldState() const
{
	return soldState.get();
}

std::ostream&
operator<<(std::ostream &os, const GumballMachine &gbm)
{
	os << "\nMighty Gumball, Inc.";
	os << "\nC++ enabled Standing Gumball Model #2020";
	os << "\nInventory: " << gbm.getCount() << " gumball";
	if (gbm.getCount() != 1)
		os << "s";
	os << "\n";
	os << "Machine is " << *gbm.getState() << "\n";
	return os;
}
