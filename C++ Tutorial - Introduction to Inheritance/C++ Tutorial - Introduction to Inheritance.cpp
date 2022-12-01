// C++ Tutorial - Introduction to Inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

#include "Bird.h"
#include "Cat.h"
#include "Dog.h"
#include "Fish.h"
#include "Rabbit.h"

int main()
{
	std::vector<Animal*> AllAnimals;

	// allocate and store a bunch of animals
	AllAnimals.push_back(new Bird());
	AllAnimals.push_back(new Cat());
	AllAnimals.push_back(new Dog());
	AllAnimals.push_back(new Fish());
	AllAnimals.push_back(new Rabbit());

	// tell the animals to appear
	for (auto animalPtr : AllAnimals)
	{
		animalPtr->PerformAppear();
	}

	// free the memory for the animals
	for (auto animalPtr : AllAnimals)
		delete animalPtr;
}
