#include "SimpleRandom.h"
#include <random>
#include <ctime>

SimpleRandom::SimpleRandom(std::time_t time) : e(time) { }

SimpleRandom::rand_type
SimpleRandom::nextInt(const unsigned i)
{
	u = std::uniform_int_distribution<unsigned>(0, i);
	e.discard(1);
	return u(e);
}
