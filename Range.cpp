#include "Range.h"

Range::Range(double Min, double Max) :
    MinRange(Min), MaxRange(Max) {};

Range::~Range() {};

double Range::getMax()
{
    return MaxRange;
}

double Range::getMin()
{
    return MinRange;
}