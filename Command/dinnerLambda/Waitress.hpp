#ifndef WAITRESS_H
#define WAITRESS_H

#include <functional>

class Waitress {
	public:
		Waitress () = default;
		void takeOrder(std::function<void()> order) { order(); }
};

#endif /* WAITRESS_H */
