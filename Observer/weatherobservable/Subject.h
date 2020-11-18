#ifndef SUBJECT_H
#define SUBJECT_H

#include "DataObject.h"
#include "Observer.h"
#include <list>

class Subject {
	public:
		Subject() = default;
		virtual ~Subject() = default;
		void addObserver(Observer *o) { observers.push_back(o); }
		void deleteObserver(Observer *o);
		void notifyObservers(DataObject *arg = nullptr); // using default arg instead of overloading
	protected:
		void setChanged() { changed = true; }
		void clearChanged() { changed = false; }
		bool hasChanged() { return changed; }
	private:
		std::list<Observer *> observers;
		bool changed = false;
};

inline
void
Subject::deleteObserver(Observer *o)
{
	if (!observers.empty())
		std::erase(observers, o); // std::erase is C++20 addition
}

inline
void
Subject::notifyObservers(DataObject *arg)
{
	if (changed) {
		for (const auto &observer : observers)
			observer->update(this, arg);
		changed = false;
	}
}

#endif /* ifndef SUBJECT_H */
