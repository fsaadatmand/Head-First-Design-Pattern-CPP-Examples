#ifndef OBSERVER_H
#define OBSERVER_H

#include "DataObject.h"

class Subject; // forward declaration
class Observer {
	public:
		virtual ~Observer() = default;
		virtual void update(Subject *sbj, DataObject *arg) = 0;
};

#endif /* ifndef OBSERVER_H */
