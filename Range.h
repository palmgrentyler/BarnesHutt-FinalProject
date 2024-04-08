#pragma once

#include "Point.h"

class Range {
public:
	Range(double Min, double Max);
	~Range();

	double getMax();
	double getMin();

private:
	double Min;
	double Max;
};