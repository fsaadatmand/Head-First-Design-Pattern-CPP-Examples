#ifndef NO_QUARTER_STATE_H
#define NO_QUARTER_STATE_H

#include "State.h"
#include <ostream>

class GumballMachine;

class NoQuarterState : public State {
	public:
		NoQuarterState() = default;
		NoQuarterState(GumballMachine *gbm);
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

#endif /* NO_QUARTER_STATE_H */
