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
	// overloaded output operator
	friend std::ostream& operator<<(std::ostream &, const Duck &); 
	// overloaded less-than operator
	friend bool operator<(const Duck &, const Duck &);
	public:
		Duck(const std::string &n, int w) : name(n), weight(w) {}
	private:
		std::string name;
		int weight;
};

inline
std::ostream&
operator<<(std::ostream &os, const Duck &duck)
{
	os << duck.name << " weighs " << duck.weight;
	return os;
}

inline
bool
operator<(const Duck &lhs, const Duck &rhs)
{
	return lhs.weight < rhs.weight;
}

#endif /* DUCK_H */
