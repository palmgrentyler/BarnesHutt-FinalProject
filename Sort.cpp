#include "Bucket.h"
#include "Range.h"
#include <algorithm>

Range SortY(Bucket Original) {
	std::vector<Point>& ySorted = Original.getPointList();
	float Min = 0;
	float Max = 0;

	for (int i = 0; i < ySorted.size(); i++) {
		if (ySorted[i].getY() > Max) {
			Max = static_cast<float>(ySorted[i].getY());
		}
		else if (ySorted[i].getY() < Min) {
			Min = static_cast<float>(ySorted[i].getY());
		}
	}

	Range rangeY(Min, Max);
	return rangeY;
}

Range SortX(Bucket Original) {
	std::vector<Point>& xSorted = Original.getPointList();
	float Min = 0;
	float Max = 0;

	for (int i = 0; i < xSorted.size(); i++) {
		if (xSorted[i].getX() > Max) {
			Max = static_cast<float>(xSorted[i].getX());
		}
		else if (xSorted[i].getX() < Min) {
			Min = static_cast<float>(xSorted[i].getX());
		}
	}
	Range rangeX(Min, Max);
	return rangeX;
}