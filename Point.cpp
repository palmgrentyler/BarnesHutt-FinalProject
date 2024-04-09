#include "Point.h"
#include <vector>


Point::Point(double x, double y, const double mass, double vecX, double vecY)
	: xCor(x), yCor(y), mass(mass), vecX(vecX), vecY(vecY) {}; //Constructor

Point::~Point() {}; //Default destructor

std::vector<bool> Point::getIndex() {
	return QuadrantIndex;
}

void Point::setIndex(std::vector <bool> quadrant) {
	QuadrantIndex = quadrant;
}

double Point::getX(){ //Returns x-coordinate point
	return xCor;
}

double Point::getY(){ //Returns y-coordinate point
	return yCor;
}

void Point::setX(double newX) { //Sets the x-coordiante
	xCor = newX;
}

void Point::setY(double newY) { //Sets the y-coordinate
	yCor = newY;
}

const double& Point::getMass() const { //Gets the mass of the particle
	return mass;
}

double Point::getVecX() { //Gets the x-velocity vector of the particle
	return vecX;
}

double Point::getVecY() { //Gets the y-velocity vector of the particle
	return vecY;
}

void Point::setVecX(double newVecX) { //Sets the X-velocity vector
	vecX = newVecX;
}

void Point::setVecY(double newVecY) { //Sets the Y-velocity vector
	vecY = newVecY;
}

