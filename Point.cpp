#include "Point.h"
#include <vector>
#include <iostream>

Point::Point() {};

Point::Point(double x, double y) {
	xCor = x;
	yCor = y;
}

Point::Point(double x, double y, double mass, double vecX, double vecY)
	: xCor(x), yCor(y), pointMass(mass), PointVecX(vecX), PointVecY(vecY) {}; //Constructor


Point::~Point() { }; //Default destructor

std::vector<bool> Point::getIndex() {
	return QuadrantIndex;
}

void Point::setIndex(const std::vector <bool> quadrant) { //Sets the quadrant index for a point
	QuadrantIndex = quadrant;
}

double Point::getX() { //Returns x-coordinate point
	return xCor;
}

double Point::getY() { //Returns y-coordinate point
	return yCor;
}

void Point::setX(double newX) { //Sets the x-coordiante
	xCor = newX;
}

void Point::setY(double newY) { //Sets the y-coordinate
	yCor = newY;
}

double Point::getMass(){ //Gets the mass of the particle
	return pointMass;
}

double Point::getVecX() { //Gets the x-velocity vector of the particle
	return PointVecX;
}

double Point::getVecY() { //Gets the y-velocity vector of the particle
	return PointVecY;
}

void Point::setVecX(double newVecX) { //Sets the X-velocity vector
	PointVecX = newVecX;
}

void Point::setVecY(double newVecY) { //Sets the Y-velocity vector
	PointVecY = newVecY;
}

Point Point::lerp(Point a, Point b) {
	Point c;

	c.xCor = a.xCor + (b.xCor - a.xCor) * 0.5;
	c.yCor = a.yCor + (b.yCor - a.yCor) * 0.5;

	return c;
}