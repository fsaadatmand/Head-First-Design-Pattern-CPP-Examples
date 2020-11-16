#ifndef FLY_BEHAVIOR_H
#define FLY_BEHAVIOR_H

class FlyBehavior {
	public:
		virtual ~FlyBehavior() = default;
		virtual void fly() = 0;
};

#endif /* ifndef FLY_BEHAVIOR_H */
