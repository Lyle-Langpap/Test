#include "Test.h"


int main(int argc, char **argv)
{
	Test_Range_Float("Floats in range", 1.0f, 1.1f, 0.11f);
	Test_Range_Float("Floats in range", 1.0f, 1.1f, 0.1f);
	Test_Range_Float("Floats out of range", 1.0f, 1.11f, 0.1f);

	return 0;
}
