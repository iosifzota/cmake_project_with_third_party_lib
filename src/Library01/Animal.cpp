#include "Animal.h"
#include "Utils.h"


Animal::Animal(const char * name, const char * communicationSound) :
	m_name{ name }, m_communcationSound { communicationSound }
{
	// empty
}

const char * Animal::communicate() const
{
	const char * out[] = { m_name, " says ", " . " };
	return Utils::concatCStrings(out, 3);
}

const char * Animal::getName() const
{
	return m_name;
}

const char * Animal::getCommuncationSound() const
{
	return m_communcationSound;
}


Animal::~Animal()
{
}

const char * communcationInTwo(const Animal & animal1, const Animal & animal2)
{
	if (strcmp(animal1.getName(), "Run") == 0)
		return hiddenCommuncation(animal1, animal2);
	const char * out[] = { animal1.getName(), " says ", animal1.getCommuncationSound(), " to ", animal2.getName(), " and reply is ", animal2.getCommuncationSound(), "." };
	return Utils::concatCStrings(out, NELEMS(out));
}

const char * hiddenCommuncation(const Animal & animal1, const Animal & animal2)
{
	const char * out[] = { animal1.getName(), " says ", animal1.getCommuncationSound(), ", ", animal1.getCommuncationSound(), " but there's no reply from ", animal2.getName(), "." };
	return Utils::concatCStrings(out, NELEMS(out));
}

