#pragma once

#define NELEMS(x) sizeof(x)/sizeof(x[0])

namespace Utils
{
	const char * concatCStrings(const char * strings[], unsigned int nbStrings);
};

