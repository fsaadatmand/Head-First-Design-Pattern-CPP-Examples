#ifndef DRONE_H
#define DRONE_H

class Drone {
public:
	virtual ~Drone () = default;
	virtual void beep() = 0;
	virtual void spin_rotors() = 0;
	virtual void take_off() = 0;
};

#endif /* DRONE_H */
