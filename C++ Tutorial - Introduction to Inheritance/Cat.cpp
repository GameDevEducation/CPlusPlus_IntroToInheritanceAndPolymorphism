#include "Cat.h"
#include <iostream>

void Cat::PerformAppear()
{
	std::cout << "Cats are cool!" << std::endl;

	Animal::PerformAppear();
}
