#include "Range.h"

Range::Range(double Min, double Max) :
Min(Min), Max(Max) {}

Range::~Range() {};

double Range::getMax()
{
    return Max;
}

double Range::getMin() 
{
    return Min;
}