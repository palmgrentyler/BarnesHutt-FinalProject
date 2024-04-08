#include "Bucket.h"
#include "Point.h"

void Place(Bucket Points, double MinX, double MaxX, double MinY, double MaxY) {

	if (Points.getSize() >1) {

		float MidX = (MaxX - MinX) / 4;
		float MidY = (MaxY - MinY) / 4;

		Bucket NW(Points.getSize());
		Bucket NE(Points.getSize());
		Bucket SW(Points.getSize());
		Bucket SE(Points.getSize());

		for (int i = 0; i < Points.getSize(); i++) {
			if (Points[i].getX() > MinX && Points[i].getX() < MidX && Points[i].getY() > MidY && Points[i].getY() < MaxY) { //Check to see if the current point is in the NW corner
				NW.push_back(Points[i]);
			}
			else if (Points[i].getX() > MidX && Points[i].getX() < MaxX && Points[i].getY() > MidY && Points[i].getY() < MaxY) { //Check to see if the current point is in the NE corner
				NE.push_back(Points[i]);
			}
			else if (Points[i].getX() > MinX && Points[i].getX() < MidX && Points[i].getY() > MinY && Points[i].getY() < MidY) { //Check to see if the current point is in the SW corner
				SW.push_back(Points[i]);
			}
			else { //Place the current point in the SE corner
				SE.push_back(Points[i]);
			}
		}

		NW.shrink_to_fit();
			Place(NW, MinX, MidX, MidY, MaxY);
		NE.shrink_to_fit();
			Place(NE, MidX, MaxX, MidY, MaxY);
		SW.shrink_to_fit();
			Place(SW, MinX, MidX, MinY, MidY);
		SE.shrink_to_fit();
			Place(SE, MidX, MaxX, MinY, MidY);
	}
	else {
		Point SinglePoint = Points[0];
		SinglePoint.setIndex(Points.getQuadrantIndex());
	}
}