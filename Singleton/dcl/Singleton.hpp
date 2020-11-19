// Double-checked locking

#ifndef SINGLETON_H
#define SINGLETON_H

#include <mutex>

class Singleton {
	public:
		volatile static Singleton* getInstance();
	private:
		Singleton () = default;
		volatile static Singleton *uniqueInstance;
		static std::mutex uniqueInstance_mtx; // protect uniqueInstance
};

inline
volatile
Singleton* Singleton::uniqueInstance = nullptr;

inline
std::mutex Singleton::uniqueInstance_mtx; // protect uniqueInstance

inline
volatile Singleton*
Singleton::getInstance()
{
	if (uniqueInstance == nullptr) {
		std::lock_guard<std::mutex> gaurd(uniqueInstance_mtx); // lock
		if (uniqueInstance == nullptr)
			uniqueInstance = new Singleton();
	}
	return uniqueInstance;
}

#endif /* SINGLETON_H */
