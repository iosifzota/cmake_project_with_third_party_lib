#include "Cat.h"
#include "Utils.h"

Cat::Cat(const char * name) :
	Animal(name, "meow")
{
	// empty
}

const char * Cat::communicate() const
{
	const char * out[] = { "A cat named ", this->m_name, " says ", this->m_communcationSound, "." };
	return Utils::concatCStrings(out, NELEMS(out));
}

Cat::~Cat()
{
}
