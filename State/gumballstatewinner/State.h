#ifndef STATE_H
#define STATE_H

#include <ostream>
class State {
	friend std::ostream& operator<<(std::ostream&, const State &);
	public:
		virtual ~State () = default;
		virtual void insertQuarter() = 0;
		virtual void ejectQuarter() = 0;
		virtual void turnCrank() = 0;
		virtual void dispense() = 0;
		virtual void refill() = 0;
	protected:
		virtual void toString(std::ostream &) const = 0;
};

inline
std::ostream& operator<<(std::ostream& os, const State &state)
{
	state.toString(os);
	return os;
}

#endif /* STATE_H */
