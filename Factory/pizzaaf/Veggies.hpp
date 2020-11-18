#ifndef VEGGIES_H
#define VEGGIES_H

#include <string>

class Veggies {
	public:
		virtual ~Veggies() = default;
		virtual std::string toString() const = 0;
};

#endif /* VEGGIES_H */
