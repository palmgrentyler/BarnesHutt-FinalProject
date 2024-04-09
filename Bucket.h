#pragma once

#include <bitset> 
#include <vector>
#include "Point.h"

class Bucket {
public:
	Bucket(std::vector<Point>& BucketPointList); //Creation of a Bucket with only a vector of points
	Bucket(std::vector<bool> QuadIndex, std::vector<Point>& BucketPointList); //Creation of a Bucket with a vector of points, and a given quadrent index (ion the form of a vector)
	~Bucket();

	Point& getPoint(int index);
	size_t getSize();
	std::vector <bool> getQuadrantIndex();
	void PushQuadrantBack(bool index);
	std::vector <Point>& getPointList();
	Point& operator[](int index);
	void shrink_to_fit();
	void push_back(Point p);
		
private:
	std::vector <bool> quadrantIndex; //Quadrant designation
	std::vector <Point>& pointList; //Vector of Points
};