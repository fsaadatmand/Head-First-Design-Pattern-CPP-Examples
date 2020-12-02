#ifndef SIMPLE_RANDOM_H
#define SIMPLE_RANDOM_H

#include <random>
#include <ctime>
#include <chrono>

class SimpleRandom {
	public:
		using rand_type = std::default_random_engine::result_type;
		SimpleRandom() = default;
		SimpleRandom(std::time_t);
		rand_type nextInt(const unsigned i);
	private:
		std::default_random_engine e = std::default_random_engine(std::time(nullptr));
		std::uniform_int_distribution<unsigned> u;
};

#endif /* SIMPLE_RANDOM_H */
