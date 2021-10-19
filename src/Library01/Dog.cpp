#include "Dog.h"
#include "Utils.h"

Dog::Dog(const char * name) :
	Animal(name, "bark")
{
}

const char * Dog::communicate() const
{
	const char * out[] = { "A dog named ", this->m_name, " says ", this->m_communcationSound, "." };
	return Utils::concatCStrings(out, NELEMS(out));
}


Dog::~Dog()
{
}
