#pragma once
#include <vector> 

class Point
{
public:
	double xCor; //X coordinate
	double yCor; //Y coordinate
	double pointMass; //Mass of the particle
	double PointVecX; //X-velocity vector of the particle
	double PointVecY; //y-velocity vector of the particle
	std::vector <bool> QuadrantIndex;

public:
	Point();
	Point(double x, double y);
	Point(double x, double y, const double mass, double vecX, double vecY); //Constructor

	~Point(); //Default destructor

	std::vector <bool> getIndex();
	void setIndex(const std::vector<bool> quadrant);
	double getX(); //Get X-coordinate from point
	double getY(); //Get Y-coordinate from point
	void setX(double newX); //Sets the X-coordinate 
	void setY(double newY); //Sets the Y-coordinate

	double getMass(); //Gets the mass of the particle
	double getVecX(); //Gets the X-velocity vector of the particle
	double getVecY(); //Gets the Y-velocity vector of the particle
	void setVecX(double newVecX); //Sets the X-velocity vector
	void setVecY(double newVecY); //Sets the Y-velocity vector

	Point lerp(Point a, Point b);
};