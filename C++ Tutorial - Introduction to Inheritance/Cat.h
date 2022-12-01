#pragma once
#include "Animal.h"

class Cat : public Animal
{
public:
	Cat() :
		Animal("Cat")
	{

	}

	virtual void PerformAppear() override;

	//virtual void DoesNotExistInParent1() {}
	//virtual void DoesNotExistInParent2() override {}
};

