#ifndef WILD_TURKEY_ADAPTER_H
#define WILD_TURKEY_ADAPTER_H

#include "Duck.hpp"
#include "Turkey.hpp"
#include "WildTurkey.hpp"
#include <iostream>

/*
 * Multiple Inheritance:
 * Inherit publicly from target (Duck) and privately from adaptee (WildTurky) thus the adapter would be a subclass of target but not the adaptee (Design Pattern, 144). The former is an interface (abstract) while the later is an implimentation (concrete).
*/

class WildTurkeyAdapter : public Duck, private WildTurkey {
	public:
		WildTurkeyAdapter() = default;
		void quack() override { WildTurkey::gobble(); }
		void fly() override;
};

inline
void
WildTurkeyAdapter::fly()
{
	for (int i = 0; i < 5; ++i)
		WildTurkey::fly();
}

#endif /* WILD_TURKEY_ADAPTER_H */
