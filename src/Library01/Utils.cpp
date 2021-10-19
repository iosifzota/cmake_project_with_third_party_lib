#include "Utils.h"

#include <string>

const char * Utils::concatCStrings(const char * strings[], unsigned int nbStrings)
{
	std::string out;

	if (strings)
		for (unsigned int idx = 0; idx < nbStrings; idx++)
			out += strings[idx];

	return strdup(out.c_str());
}

