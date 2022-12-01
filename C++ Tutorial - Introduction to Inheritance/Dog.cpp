#include "Dog.h"
#include <iostream>

void Dog::PerformAppear()
{
	Animal::PerformAppear();

	//std::cout << InvisibleToChildren << std::endl;

	std::cout << "I'm an animal of type " << AnimalName << std::endl;
	std::cout << "Dogs are cool!" << std::endl;
}
