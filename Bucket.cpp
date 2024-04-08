#include "Bucket.h"

Bucket::Bucket(){}

Bucket::Bucket(int size) {
	std::vector <Point&> PointList(size); //Array of Points
}

Bucket::~Bucket(){}

Point& Bucket::getPoint(int index) {
	return pointList[index];
}

int Bucket::getSize() {
	return pointList.size();
}

std::vector<bool> Bucket::getQuadrantIndex() {
	return quadrantIndex;
}

std::vector<Point&> Bucket::getPointList() {
	return pointList;
}

Point& Bucket::operator[](int index)
{
	return pointList[index];
}

void Bucket::shrink_to_fit()
{
	pointList.shrink_to_fit();
}

void Bucket::push_back(Point p)
{
	pointList.push_back(p);
}
