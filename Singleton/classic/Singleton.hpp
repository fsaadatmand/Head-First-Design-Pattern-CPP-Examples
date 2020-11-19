#ifndef SINGLETON_H
#define SINGLETON_H

// NOTE: This is not thread safe!

class Singleton {
	public:
		static Singleton* getInstance();
	private:
		Singleton() = default;
		static Singleton *uniqeInstance;
};

inline
Singleton*
Singleton::getInstance()
{
	if (uniqeInstance == nullptr)
		uniqeInstance = new Singleton();
	return uniqeInstance;
}

#endif /* SINGLETON_H */
