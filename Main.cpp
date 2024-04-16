#include "TestHarness.h"
#include <iostream>
#include "Bucket.h"

int main()
{

//random number generator used in some tests
	srand(::time_t(NULL));

	TestResult tr;
	TestRegistry::runAllTests(tr);

	return 0;
}
