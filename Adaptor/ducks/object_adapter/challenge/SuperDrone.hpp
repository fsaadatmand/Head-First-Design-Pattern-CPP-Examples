#ifndef SUPER_DRONE_H
#define SUPER_DRONE_H

#include "Drone.hpp"
#include <iostream>

class SuperDrone : public Drone {
public:
	void beep() override { std::cout << "Beep beep beep\n"; }
	void spin_rotors() override { std::cout << "Rotors are spinning\n"; }
	void take_off() override { std::cout << "Taking off\n"; }
};

#endif /* SUPER_DRONE_H */
