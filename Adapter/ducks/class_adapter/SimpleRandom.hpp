#ifndef SIMPLE_RANDOM_H
#define SIMPLE_RANDOM_H

#include <memory>
#include <random>
#include <ctime>

class SimpleRandom {
	public:
		using rand_type = std::default_random_engine::result_type;
		SimpleRandom() = default;
		rand_type nextInt(const unsigned i);
	private:
		std::default_random_engine e = std::default_random_engine(std::time(nullptr));
		std::uniform_int_distribution<unsigned> u;
};


SimpleRandom::rand_type
SimpleRandom::nextInt(const unsigned i)
{
	u = std::uniform_int_distribution<unsigned>(0,i);
	e.discard(1);
	return u(e);
}

#endif /* SIMPLE_RANDOM_H */
