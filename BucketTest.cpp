#include "Bucket.cpp"
#include "TestHarness.h"
#include "Point.cpp"

TEST(ConstrucitonTest, Bucket) {
	
	Point p1(rand(), rand(), rand(), rand(), rand());
	Point p2(rand(), rand(), rand(), rand(), rand());
	Point p3(rand(), rand(), rand(), rand(), rand());
	Point p4(rand(), rand(), rand(), rand(), rand());
	Point p5(rand(), rand(), rand(), rand(), rand());

	std::vector<Point> InputList = { p1, p2, p3, p4, p5 };

	Bucket ParentBucket( InputList );
}