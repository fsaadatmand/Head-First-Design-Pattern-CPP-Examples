#ifndef DUCK_H
#define DUCK_H

#include <ostream>
#include <string>

/*
 * C++ Does not have an equivalent to Java's Comparable class (interface). The standard
 * library sort(), however, does employ the 'template' model, albeit not through
 * class inheritance. By default sort uses the element's less-than (<) operator
 * to compare elements. To take advantage of this one only need to provide an
 * overload to the class' operator <, as seen below.
 */

class Duck {
	public:
		Duck(const std::string &n, int w) : name(n), weight(w) {}
		int getWeight() const { return weight; }
		std::string getName() const { return name; }
	private:
		std::string name;
		int weight;
};

// overloaded output operator
inline
std::ostream&
operator<<(std::ostream &os, const Duck &duck)
{
	os << duck.getName() << " weighs " << duck.getWeight();
	return os;
}

// overloaded less-than operator
inline
bool
operator<(const Duck &lhs, const Duck &rhs)
{
	return lhs.getWeight() < rhs.getWeight();
}

#endif /* DUCK_H */
