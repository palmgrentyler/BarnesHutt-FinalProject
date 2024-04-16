#include "TestHarness.h"
#include "Range.h"
#include "Bucket.h"
#include "Sort.h"

TEST(SortPoints, Range) {
	
	Point p1(345.6,		2543.6,		1000, 4, 4);
	Point p2(22354.5,	-2346.352,	1000, 4, 4);
	Point p3(0.352,		2346.5,		1000, 4, 4);
	Point p4(-12435.4,	-625.53,	1000, 4, 4);
	Point p5(-3.56,		-0.2356,	1000, 4, 4);
	
	Point* test_points = new Point[5];

	test_points[0] = p1;
	test_points[1] = p2;
	test_points[2] = p3;
	test_points[3] = p4;
	test_points[4] = p5;

	Bucket sorting_bucket(5);

	sorting_bucket.getMinMax(test_points, 5);

	sorting_bucket.barnesHuttSort(&sorting_bucket, test_points, 5);
}
