#include "Bucket.h"

Bucket::Bucket(std::vector <bool>QuadIndex, std::vector <Point>& BucketPointList) //Creation of a Bucket with a vector of points and a given quadrent index
	:  quadrantIndex(QuadIndex), pointList(BucketPointList) {};


Bucket::Bucket(std::vector <Point>& BucketPointList)//Creation of a Bucket with only a vector of points
	: pointList(BucketPointList) {};

Bucket::~Bucket(){}

Point& Bucket::getPoint(int index) { //retuns the point at a given index
	return pointList[index];
}

size_t Bucket::getSize() { // returns the size of the Bucket's vector of points
	return pointList.size();
}

std::vector<bool> Bucket::getQuadrantIndex() { //returns the current Bucket's quadrant index
	return quadrantIndex;
}

void Bucket::PushQuadrantBack(bool index) {
	quadrantIndex.push_back(index);
}

std::vector<Point>& Bucket::getPointList(){ //returns the full vector of points
	return pointList;
}

Point& Bucket::operator[](int index)
{
	return pointList[index];
}

void Bucket::shrink_to_fit() //resize the Bucket's vector
{
	pointList.shrink_to_fit();
}

void Bucket::push_back(Point p) //Place a point in the Bucket's vector
{
	pointList.push_back(p);
}
