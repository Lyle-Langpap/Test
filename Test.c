#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "ANSI/ANSI.h"
#include "Test.h"


/// Check if two floats are within a given range of each other.
void Test_Range_Float(const char *title, const float a, const float b, const float range)
{
	printf("%s: ", title);

	if (absf(a - b) <= range)
	{
		printf(ANSI_FG_GREEN "%f is within %f of %f" ANSI_DEFAULT "\n", a, range, b);
	}
	else
	{
		printf(ANSI_FG_RED "%f is outside %f of %f" ANSI_DEFAULT "\n", a, range, b);
	}
}
