#include "TestHarness.h"
#include <iostream>
#include "Bucket.h"
#include "Sort.cpp"
#include "place.cpp"

int main()
{

	/*Bucket temp;

	Range xRange = SortX(temp);
	Range yRange = SortY(temp);

	Place(temp, xRange.getMin(), xRange.getMax(), yRange.getMin(), yRange.getMax());
*/

  // random number generator used in some tests
  srand(::time_t(NULL));

  TestResult tr;
  TestRegistry::runAllTests(tr);

  return 0;
}
