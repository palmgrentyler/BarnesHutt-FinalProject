#pragma once
#pragma once

#include "Point.h"

class Range {
public:
	Range(double MinRange, double MaxRange);
	~Range();

	double getMax();
	double getMin();

private:
	double MinRange;
	double MaxRange;
};