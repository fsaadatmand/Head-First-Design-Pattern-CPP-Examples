#ifndef WINNER_STATE_H
#define WINNER_STATE_H

#include "State.h"

class GumballMachine;

class WinnerState : public State {
	public:
		WinnerState(GumballMachine *);
		void insertQuarter() override;
		void ejectQuarter() override;
		void turnCrank() override;
		void dispense() override;
		void refill() override;
	protected:
		virtual void toString(std::ostream &) const override;
	private:
		GumballMachine *gumballMachine;
};

#endif /* WINNER_STATE_H */
