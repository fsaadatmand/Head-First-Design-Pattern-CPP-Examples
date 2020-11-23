#ifndef ITERATOR_H
#define ITERATOR_H

#include "MenuItem.h"

class Iterator {
	public:
		virtual ~Iterator() = default;
		virtual MenuItem next() = 0;
		virtual bool hasNext() const = 0;
};

#endif /* ITERATOR_H */
