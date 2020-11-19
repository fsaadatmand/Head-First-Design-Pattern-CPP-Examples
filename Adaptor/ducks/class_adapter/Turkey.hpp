#ifndef TURKEY_H
#define TURKEY_H

class Turkey {
	public:
		virtual ~Turkey () = default;
		virtual void gobble() = 0;
		virtual void fly() = 0;
};

#endif /* TURKEY_H */
