#include "Duck.h"
#include "MallardDuck.h"
#include "ModelDuck.h"
#include "FlyRocketPowered.h"
#include "DuckCall.h"
#include "MuteDuck.h"
#include <memory>

int main() {
	using DuckPtr = std::unique_ptr<Duck>; // type alias
	DuckPtr mallard = std::make_unique<MallardDuck>();
	mallard->performQuack();
	mallard->performFly();

	DuckPtr model = std::make_unique<ModelDuck>();
	model->performFly();
	model->setFlyBehavior(std::make_unique<FlyRocketPowered>());
	model->performFly();

	auto duckCall = DuckCall();
	duckCall.performQuack();
	duckCall.display();

	DuckPtr muteduck = std::make_unique<MuteDuck>();
	muteduck->performFly();
	muteduck->performQuack();
	muteduck->display();

	return 0;
};
