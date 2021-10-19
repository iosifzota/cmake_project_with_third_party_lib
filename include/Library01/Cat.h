#pragma once
#include "Animal.h"
class  Cat :
	public Animal
{
public:
	Cat(const char * name);

	const char * communicate() const override;

	virtual ~Cat();
};

