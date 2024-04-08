#pragma once

#include <bitset> 
#include <vector>
#include "Point.h"

class Bucket {
public:
	Bucket();
	Bucket(int size);
	~Bucket();

	Point& getPoint(int index);
	int getSize();
	std::vector <bool> getQuadrantIndex();
	std::vector <Point&> getPointList();
	Point& operator[](int index);
	void shrink_to_fit();
	void push_back(Point p);
		
private:
	std::vector <bool> quadrantIndex; //Quadrant designation
	std::vector <Point&> pointList; //Array of Points
};