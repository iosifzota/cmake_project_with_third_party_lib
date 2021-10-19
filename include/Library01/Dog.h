#pragma once
#include "Animal.h"
class  Dog  :
	public Animal
{
public:
	Dog(const char * name);

	const char * communicate() const override;

	virtual ~Dog();
};

