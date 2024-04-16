#pragma once

#include <vector>
#include "Point.h"

class Bucket {
public:
	Bucket* parent;
	unsigned num_indices;
	unsigned* indices;
	Point min, max;
	Bucket* sort_buckets;

public:
	Bucket();
	Bucket(unsigned num_points); //Creation of a Bucket with only a vector of points

	~Bucket();

	void getMinMax(Point * points, unsigned num_points);
	void barnesHuttSort(Bucket *parent, Point * points, unsigned count);
};

