#pragma once
#include <string>

class Animal
{
// protected variables and functions are visible within
// the owning class AND it's children
// they are not visible outside of that
protected:
	std::string AnimalName;

// private variables and functions are only visible within the owning class
private:
	std::string InvisibleToChildren;

public:
	Animal(std::string InName) :
		AnimalName(InName)
	{

	}

	Animal() : Animal("UNKNOWN NAME")
	{

	}

	virtual void PerformAppear();
};

