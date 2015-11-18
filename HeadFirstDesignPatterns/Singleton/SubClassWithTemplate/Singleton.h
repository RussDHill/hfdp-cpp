#pragma once

template <class T>
class Singleton  
{
public:
	static shared_ptr<T> getInstance()
	{
		if (!uniqueInstance) {
			uniqueInstance = shared_ptr<T>(new T(), mem_fun(&Singleton::destroy));
		}
		return uniqueInstance;
	};
	
	bool destroy()
	{
		delete this;
		return true;
	};

	virtual ~Singleton(){};

protected:
	Singleton(){};
private:
	static shared_ptr<T> uniqueInstance;
};

template <typename T> shared_ptr<T> Singleton<T>::uniqueInstance;
