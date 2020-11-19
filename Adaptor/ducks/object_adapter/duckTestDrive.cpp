#include "challenge/Drone.hpp"
#include "challenge/DroneAdapter.hpp"
#include "challenge/SuperDrone.hpp"
#include "Duck.hpp"
#include "Turkey.hpp"
#include "MallardDuck.hpp"
#include "TurkeyAdapter.hpp"
#include "WildTurkey.hpp"
#include <iostream>

void testDuck(Duck *duck) {
	duck->quack();
	duck->fly();
}

void testTurkey(Turkey *turkey) {
	turkey->gobble();
	turkey->fly();
}

int main()
{
	auto *duck = new MallardDuck();

	auto turkey = new WildTurkey();
	auto turkeyAdapter = new TurkeyAdapter(turkey);

	std::cout << "The Turkey says...\n";
	testTurkey(turkey);

	std::cout << "\nThe Duck says...\n";
	testDuck(duck);

	std::cout << "\nThe TurkeyAdaptor says...\n";
	testDuck(turkeyAdapter);

	// Challenge
	auto drone = new SuperDrone();
	auto droneAdapter = new DroneAdapter(drone);
	std::cout << "\nDroneAdapter says...\n";
	testDuck(droneAdapter);

	delete duck;
	delete turkey;
	delete turkeyAdapter;
	delete drone;
	delete droneAdapter;

	return 0;
}


