#ifndef MALLARD_DUCK_ADAPTER_H
#define MALLARD_DUCK_ADAPTER_H

#include "Turkey.hpp"
#include "MallardDuck.hpp"
#include "SimpleRandom.hpp"

class MallardDuckAdapter : public Turkey, private MallardDuck {
	public:
		MallardDuckAdapter() = default;
		void gobble() override { MallardDuck::quack(); }
		void fly() override;
	private:
		SimpleRandom rand;

};

inline
void
MallardDuckAdapter::fly()
{
	if (rand.nextInt(5) == 0)
		MallardDuck::fly();
}

#endif /* MALLARD_DUCK_ADAPTER_H */
