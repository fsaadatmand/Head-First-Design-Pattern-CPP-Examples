#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Cook.hpp"
#include "Waitress.hpp"
#include <functional>

// Invoker
class Customer {
public:
	Customer(Waitress *w, Cook *c) : waitress(w), cook(c) {}
	void createOrder() { o = [&]() { cook->makeBurger(); cook->makeFries(); }; }
	void hungry() { waitress->takeOrder(o); }
private:
	Waitress *waitress;
	Cook *cook;
	std::function<void()> o;
};

#endif /* CUSTOMER_H */
