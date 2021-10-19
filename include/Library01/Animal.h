#pragma once

#include <string>

class  Animal
{
public:
	Animal(const char * name, const char * comunicationSound);

	virtual const char * communicate() const;

	const char * getName() const;
	const char * getCommuncationSound() const;

	virtual ~Animal();

protected:
	const char * m_name;
	const char * m_communcationSound;
};

extern "C"  const char * communcationInTwo(const Animal& animal1, const Animal& animal2);

const char * hiddenCommuncation(const Animal& animal1, const Animal& animal2);