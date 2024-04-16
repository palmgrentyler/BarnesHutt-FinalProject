#include "Bucket.h"
#include "TestHarness.h"
#include "Point.h"
#ifdef NOT_HAPPY
TEST(ConstructionTest, Bucket) {

	Point p1(1.0, 2.0, 3.0, 4.0, 5.0);
	Point p2(rand(), rand(), rand(), rand(), rand());
	Point p3(rand(), rand(), rand(), rand(), rand());
	Point p4(rand(), rand(), rand(), rand(), rand());
	Point p5(rand(), rand(), rand(), rand(), rand());



	std::vector<Point> InputList{ p1, p2 , p3, p4, p5};

	Bucket ParentBucket(InputList);

	Point test = ParentBucket.getPoint(1);

	for (int i = 0; i < InputList.size(); i++) {
		CHECK_DOUBLES_EQUAL(InputList[i].getX(),	ParentBucket.getPoint(i).getX(),	0.001);
		CHECK_DOUBLES_EQUAL(InputList[i].getY(),	ParentBucket.getPoint(i).getY(),	0.001);
		CHECK_DOUBLES_EQUAL(InputList[i].getMass(), ParentBucket.getPoint(i).getMass(), 0.001);
		CHECK_DOUBLES_EQUAL(InputList[i].getVecX(), ParentBucket.getPoint(i).getVecX(), 0.001);
		CHECK_DOUBLES_EQUAL(InputList[i].getVecY(), ParentBucket.getPoint(i).getVecY(), 0.001);
	}

	Bucket QuadrantBucket(ParentBucket.getPointList());
	
	for (int i = 0; i < InputList.size(); i++) {
		CHECK_DOUBLES_EQUAL(InputList[i].getX(),	QuadrantBucket.getPoint(i).getX(),		0.001);
		CHECK_DOUBLES_EQUAL(InputList[i].getY(),	QuadrantBucket.getPoint(i).getY(),		0.001);
		CHECK_DOUBLES_EQUAL(InputList[i].getMass(), QuadrantBucket.getPoint(i).getMass(),	0.001);
		CHECK_DOUBLES_EQUAL(InputList[i].getVecX(), QuadrantBucket.getPoint(i).getVecX(),	0.001);
		CHECK_DOUBLES_EQUAL(InputList[i].getVecY(), QuadrantBucket.getPoint(i).getVecY(),	0.001);
	}

}
#endif // NOT_HAPPY
