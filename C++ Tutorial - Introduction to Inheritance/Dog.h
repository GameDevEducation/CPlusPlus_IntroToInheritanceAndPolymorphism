#pragma once
#include "Animal.h"

class Dog : public Animal
{
public:
	Dog() : 
		Animal("Dog")
	{

	}

	virtual void PerformAppear() override;
};

