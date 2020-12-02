#ifndef SOLD_OUT_STATE_H
#define SOLD_OUT_STATE_H

#include "State.h"
#include <ostream>

class GumballMachine;

class SoldOutState : public State {
	public:
		SoldOutState() = default;
		SoldOutState(GumballMachine *);
		void insertQuarter() override;
		void ejectQuarter() override;
		void turnCrank() override;
		void dispense() override;
		void refill() override;
	protected:
		void toString(std::ostream &) const override;
	private:
		GumballMachine *gumballMachine;
};

#endif /* SOLD_OUT_STATE_H */
