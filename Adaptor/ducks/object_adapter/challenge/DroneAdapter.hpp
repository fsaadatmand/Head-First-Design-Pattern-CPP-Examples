#ifndef DRONE_ADAPTER_H
#define DRONE_ADAPTER_H

#include "../Duck.hpp"
#include "Drone.hpp"

class DroneAdapter : public Duck {
	public:
		DroneAdapter(Drone *d) : drone(d) {}
		virtual ~DroneAdapter() = default;
		void fly() override { drone->spin_rotors(); drone->take_off(); }
		void quack() override { drone->beep(); }
	private:
		Drone *drone;

};

#endif /* DRONE_ADAPTER_H */
