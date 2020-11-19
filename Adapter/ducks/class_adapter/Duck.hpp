#ifndef DUCK_H
#define DUCK_H

class Duck {
	public:
		virtual ~Duck () = default;
		virtual void quack() = 0;
		virtual void fly() = 0;
};

#endif /* DUCK_H */
