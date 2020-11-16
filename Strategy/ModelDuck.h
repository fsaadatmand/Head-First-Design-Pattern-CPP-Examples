#ifndef MODEL_DUCK_H
#define MODEL_DUCK_H

#include "Duck.h"
#include "FlyNoWay.h"
#include "Quack.h"
#include <iostream>

class ModelDuck : public Duck {
	public:
		ModelDuck();
		void display() const override { std::cout << "I'm a model duck"; }
};

inline ModelDuck::ModelDuck() {
	flyBehavior = std::make_unique<FlyNoWay>();
	quackBehavior = std::make_unique<Quack>();
}

#endif /* ifndef MODEL_DUCK_H */
