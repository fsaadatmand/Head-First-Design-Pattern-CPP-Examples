#ifndef TURKEY_ADAPTER_H
#define TURKEY_ADAPTER_H

#include "Duck.hpp"
#include "Turkey.hpp"
#include <iostream>

class TurkeyAdapter : public Duck {
	public:
		TurkeyAdapter(Turkey *tur) : turkey(tur) { }
		void quack() override { turkey->gobble(); }
		void fly() override;
	private:
		Turkey *turkey;
};

inline
void
TurkeyAdapter::fly()
{
	for (int i = 0; i < 5; ++i)
		turkey->fly();
}

#endif /* TURKEY_ADAPTER_H */
