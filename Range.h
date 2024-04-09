#pragma once

#include "Point.h"

class Range {
public:
	Range(float Min, float Max);
	~Range();

	float getMax();
	float getMin();

private:
	float Min;
	float Max;
};