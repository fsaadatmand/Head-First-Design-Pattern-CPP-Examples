#ifndef SOLD_STATE_H
#define SOLD_STATE_H

#include "State.h"
#include <ostream>

class GumballMachine;

class SoldState : public State {
	public:
		SoldState() = default;
		SoldState(GumballMachine *gbm);
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

#endif /* SOLD_STATE_H */
