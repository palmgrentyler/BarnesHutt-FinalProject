#pragma once
#include <vector> 

class Point
{
public:
	Point(std::vector<bool> index, double& x, double& y, const double& mass, double& vecX, double& vecY); //Constructor

	~Point(); //Default destructor

	std::vector <bool> getIndex();
	void setIndex(std::vector<bool> quadrant);
	double getX(); //Get X-coordinate from point
	double getY(); //Get Y-coordinate from point
	void setX(double newX); //Sets the X-coordinate 
	void setY(double newY); //Sets the Y-coordinate

	const double& getMass() const; //Gets the mass of the particle
	double& getVecX(); //Gets the X-velocity vector of the particle
	double& getVecY(); //Gets the Y-velocity vector of the particle
	void setVecX(double newVecX); //Sets the X-velocity vector
	void setVecY(double newVecY); //Sets the Y-velocity vector

private:
	double& xCor; //X coordinate
	double& yCor; //Y coordinate
	const double& mass; //Mass of the particle
	double& vecX; //X-velocity vector of the particle
	double& vecY; //y-velocity vector of the particle
	std::vector <bool> QuadrantIndex;
};