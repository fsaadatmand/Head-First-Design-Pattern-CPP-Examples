#ifndef SINGLETON_H
#define SINGLETON_H

#include <mutex>

class Singleton {
	public:
		static Singleton* getInstance();
	private:
		Singleton() = default;
		static Singleton *uniqueInstance;
		static std::mutex uniqueInstance_mtx; // protect uniqueInstance
};

inline
Singleton Singleton::*uniqueInstance = nullptr;

inline
	Singleton*
Singleton::getInstance()
{
	std::lock_guard<std::mutex> gaurd(uniqueInstance_mtx);
	if (uniqueInstance == nullptr)
		uniqueInstance = new Singleton();
	return uniqueInstance;
}

#endif /* SINGLETON_H */
