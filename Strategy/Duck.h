#ifndef DUCK_H
#define DUCK_H

#include "FlyBehavior.h"
#include "QuackBehavior.h"
#include <iostream>
#include <memory>

// abstract class
class Duck {
	public:
		virtual ~Duck() = default;
		virtual void display() const = 0; // pure virtual function
		void performQuack() const { quackBehavior->quack(); }
		void performFly() const { flyBehavior->fly(); }
		void swim() const { std::cout << "all ducks float, even decoys!\n"; }
		void setFlyBehavior(std::unique_ptr<FlyBehavior> fb) { flyBehavior = std::move(fb); } // passes ownership; C++ Core Guideline, F.26
		void setQuackBehavior(std::unique_ptr<QuackBehavior> qb) { quackBehavior = std::move(qb); }
	protected:
		std::unique_ptr<FlyBehavior> flyBehavior = nullptr;
		std::unique_ptr<QuackBehavior> quackBehavior = nullptr;
};

#endif /* ifndef DUCK_H */
