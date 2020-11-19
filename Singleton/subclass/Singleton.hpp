#ifndef SINGLETON_H
#define SINGLETON_H

#include <mutex>

class Singleton {
	public:
		using super = Singleton;
		static Singleton* getInstance();
	protected:
		Singleton() = default;
		static Singleton *uniqueInstance;
		static std::mutex uniqueInstance_mtx;
};

inline
Singleton* Singleton::uniqueInstance = nullptr;

inline 
std::mutex Singleton::uniqueInstance_mtx;

inline
Singleton*
Singleton::getInstance()
{
	std::lock_guard<std::mutex> guard(uniqueInstance_mtx);
	if (uniqueInstance == nullptr)
		uniqueInstance = new Singleton();
	return uniqueInstance;
}

#endif /* SINGLETON_H */
