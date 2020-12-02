#ifndef HAS_QUARTER_STATE_H
#define HAS_QUARTER_STATE_H

#include "State.h"
#include "SimpleRandom.h"
#include <ostream>

class GumballMachine;

class HasQuarterState : public State {
	public:
		HasQuarterState() = default;
		HasQuarterState(GumballMachine *gbm);
		void insertQuarter() override;
		void ejectQuarter() override;
		void turnCrank() override;
		void dispense() override;
		void refill() override;
	protected:
		void toString(std::ostream &) const override;
	private:
		GumballMachine *gumballMachine;
		SimpleRandom randomWinner = SimpleRandom(std::time(nullptr));
};

#endif /* HAS_QUARTER_STATE_H */
