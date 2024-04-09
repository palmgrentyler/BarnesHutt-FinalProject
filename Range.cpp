#include "Range.h"

Range::Range(float Min, float Max) :
Min(Min), Max(Max) {}

Range::~Range() {};

float Range::getMax()
{
    return Max;
}

float Range::getMin() 
{
    return Min;
}