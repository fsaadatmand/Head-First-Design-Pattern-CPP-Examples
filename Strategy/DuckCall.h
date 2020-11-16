#ifndef DUCK_CALL_H
#define DUCK_CALL_H

#include "QuackBehavior.h"
#include "Quack.h"
#include <iostream>
#include <memory>

class DuckCall {
	public:
		DuckCall() { quackBehavior = std::make_unique<Quack>(); }
		void display() const { std::cout << "I'm not a duck!\n"; }
		void performQuack() { quackBehavior->quack(); }
	private:
		std::unique_ptr<QuackBehavior> quackBehavior;
};

#endif /* ifndef DUCK_CALL_H */
