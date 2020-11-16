#ifndef OBSERVER_H
#define OBSERVER_H

class Observer {
	public:
		virtual ~Observer() = default;
		virtual void update(double t, double h, double p) = 0;
};

#endif /* ifndef OBSERVER_H */
