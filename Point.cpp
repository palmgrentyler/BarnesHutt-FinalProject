#include "Point.h"
#include <vector>


Point::Point(float x, float y, const float mass, float vecX, float vecY)
	: xCor(x), yCor(y), mass(mass), vecX(vecX), vecY(vecY) {}; //Constructor

Point::~Point() {}; //Default destructor

std::vector<bool> Point::getIndex() {
	return QuadrantIndex;
}

void Point::setIndex(std::vector <bool> quadrant) {
	QuadrantIndex = quadrant;
}

float Point::getX(){ //Returns x-coordinate point
	return xCor;
}

float Point::getY(){ //Returns y-coordinate point
	return yCor;
}

void Point::setX(float newX) { //Sets the x-coordiante
	xCor = newX;
}

void Point::setY(float newY) { //Sets the y-coordinate
	yCor = newY;
}

const float& Point::getMass() const { //Gets the mass of the particle
	return mass;
}

float Point::getVecX() { //Gets the x-velocity vector of the particle
	return vecX;
}

float Point::getVecY() { //Gets the y-velocity vector of the particle
	return vecY;
}

void Point::setVecX(float newVecX) { //Sets the X-velocity vector
	vecX = newVecX;
}

void Point::setVecY(float newVecY) { //Sets the Y-velocity vector
	vecY = newVecY;
}

