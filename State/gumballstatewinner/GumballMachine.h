#ifndef GUMBALL_MACHINE_H
#define GUMBALL_MACHINE_H

#include "State.h"
#include <ostream>
#include <memory>

class NoQuarterState;
class HasQuarterState;
class SoldOutState;
class SoldState;

class GumballMachine {
	friend std::ostream& operator<<(std::ostream &, const GumballMachine &);
	public:
		GumballMachine();
		GumballMachine(int);
		void insertQuarter();
		void ejectQuarter();
		void turnCrank();
		void releaseBall();
		int getCount() const;
		void refill(int);
		void setState(State *);
		State* getState() const;
		State* getNoQuarterState() const;
		State* getHasQuarterState() const;
		State* getSoldOutState() const;
		State* getSoldState() const;
		State* getWinnerState() const;
	private:
		std::unique_ptr<State> soldOutState;
		std::unique_ptr<State> noQuarterState;
		std::unique_ptr<State> hasQuarterState;
		std::unique_ptr<State> soldState;
		std::unique_ptr<State> winnerState;
		State *state;
		int count = 0;
};

#endif /* GUMBALL_MACHINE_H */
