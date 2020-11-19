#ifndef DUCK_ADAPTER_H
#define DUCK_ADAPTER_H

#include "Duck.hpp"
#include "Turkey.hpp"
#include "SimpleRandom.hpp" // mimics Java's Random
#include <iostream>
#include <random>
#include <ctime>

class DuckAdapter : public Turkey {
	public:
		DuckAdapter() = default;
		DuckAdapter(Duck *tur) : turkey(tur) { }
		void gobble() override { turkey->quack(); }
		void fly() override;
	private:
		Duck *turkey;
		SimpleRandom rand; // See header for implementation
};

inline
void
DuckAdapter::fly()
{ 
	if (rand.nextInt(5) == 0)
		turkey->fly();
}

#endif /* DUCK_ADAPTER_H */
