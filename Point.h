#pragma once
#include <vector> 

class Point
{
public:
	Point(float x, float y, const float mass, float vecX, float vecY); //Constructor

	~Point(); //Default destructor

	std::vector <bool> getIndex();
	void setIndex(std::vector<bool> quadrant);
	float getX(); //Get X-coordinate from point
	float getY(); //Get Y-coordinate from point
	void setX(float newX); //Sets the X-coordinate 
	void setY(float newY); //Sets the Y-coordinate

	const float& getMass() const; //Gets the mass of the particle
	float getVecX(); //Gets the X-velocity vector of the particle
	float getVecY(); //Gets the Y-velocity vector of the particle
	void setVecX(float newVecX); //Sets the X-velocity vector
	void setVecY(float newVecY); //Sets the Y-velocity vector

private:
	float xCor; //X coordinate
	float yCor; //Y coordinate
	const float& mass; //Mass of the particle
	float vecX; //X-velocity vector of the particle
	float vecY; //y-velocity vector of the particle
	std::vector <bool> QuadrantIndex;
};