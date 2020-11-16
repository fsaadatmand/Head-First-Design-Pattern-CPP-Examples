#ifndef Mute_Duck_H
#define Mute_Duck_H

#include "Duck.h"
#include "FlyWithWings.h"
#include "MuteQuack.h"
#include <iostream>
#include <memory>

class MuteDuck : public Duck {
	public:
		MuteDuck();
		void display() const override { std::cout << "I am a mute duck\n"; }
};

inline
MuteDuck::MuteDuck() {
	flyBehavior = std::make_unique<FlyWithWings>();
	quackBehavior = std::make_unique<MuteQuack>();
}

#endif /* ifndef Mute_Duck */
