#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton {
	public:
		static Singleton* getInstance() { return uniqueInstance; }
	private:
		Singleton () = default;
		static Singleton *uniqueInstance;
};

inline
Singleton* Singleton::uniqueInstance = new Singleton();

#endif /* SINGLETON_H */
