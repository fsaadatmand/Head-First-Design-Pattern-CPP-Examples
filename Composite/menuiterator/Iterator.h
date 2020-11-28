#ifndef ITERATOR_H
#define ITERATOR_H

#include <memory>

// Java's Iterator interface for C++
template <typename T>
class Iterator {
	public:
		virtual ~Iterator() = default;
		virtual std::shared_ptr<T> next() = 0;
		virtual bool hasNext() = 0;
		virtual void remove() = 0;
};

#endif /* ITERATOR_H */
