#ifndef QUACKBEHAVIOR_H
#define QUACKBEHAVIOR_H

class QuackBehavior {
	public:
		virtual ~QuackBehavior() = default;
		virtual void quack() = 0;
};

#endif /* ifndef QUACKBEHAVIOR_H */
