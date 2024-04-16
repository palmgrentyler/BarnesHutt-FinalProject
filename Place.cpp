//#include "Bucket.h"
//#include "Point.h"
//
//void Place(Bucket Points, float MinX, float MaxX, float MinY, float MaxY) {
//
//	if (Points.getSize() == 1) { //If the Bucket has only one point, set the Point's index to match the quadrant
//		Point SinglePoint = Points.getPoint(0);
//		SinglePoint.setIndex(Points.getQuadrantIndex());
//	}
//	else if (Points.getSize() > 1) { //If there's more than one point, then resume the recursion
//
//		float MidX = static_cast<float>((MaxX - MinX) / 4); //Create the midpoint of the X range
//		float MidY = static_cast<float>((MaxY - MinY) / 4); //Create the midpoint of the Y range
//
//		Bucket NW(Points.getPointList()); //Create an empty NW quadrant bucket (00) that has the parent's quadrant ID and an empty Point vector that's the same size
//		NW.getQuadrantIndex(Points.getQuadrantIndex());
//		NW.PushQuadrantBack(0);
//		NW.PushQuadrantBack(0);
//
//		Bucket NE(Points.getPointList()); //Create an empty NE quadrant bucket (01) that has the parent's quadrant ID and an empty Point vector that's the same size
//		NE.getQuadrantIndex(Points.getQuadrantIndex());
//		NE.PushQuadrantBack(0);
//		NE.PushQuadrantBack(1);
//		
//		Bucket SW(Points.getPointList()); //Create an empty SW quadrant bucket (10) that has the parent's quadrant ID and an empty Point vector that's the same size
//		SW.getQuadrantIndex(Points.getQuadrantIndex());
//		SW.PushQuadrantBack(1);
//		SW.PushQuadrantBack(0);
//		
//		Bucket SE(Points.getPointList()); //Create an empty SE quadrant bucket (11) that has the parent's quadrant ID and an empty Point vector that's the same size
//		SE.getQuadrantIndex(Points.getQuadrantIndex());
//		SE.PushQuadrantBack(1);
//		SE.PushQuadrantBack(1);
//
//		for (int i = 0; i < Points.getSize(); i++) { //Run through all points int the bucket, placing them in the smaller buckets depending on the point's coordiantes
//			
//			if ((Points.getPoint(i)).getX() >= MinX && (Points.getPoint(i)).getX() <= MidX && (Points.getPoint(i)).getY() >= MidY && (Points.getPoint(i)).getY() <= MaxY) { //Check to see if the current point is in the NW corner
//				NW.push_back(Points[i]);
//			}
//			else if ((Points.getPoint(i)).getX() > MidX && (Points.getPoint(i)).getX() < MaxX && (Points.getPoint(i)).getY() > MidY && (Points.getPoint(i)).getY() < MaxY) { //Check to see if the current point is in the NE corner
//				NE.push_back(Points[i]);
//			}
//			else if ((Points.getPoint(i)).getX() > MinX && (Points.getPoint(i)).getX() < MidX && (Points.getPoint(i)).getY() > MinY && (Points.getPoint(i)).getY() < MidY) { //Check to see if the current point is in the SW corner
//				SW.push_back(Points[i]);
//			}
//			else { //Place the current point in the SE corner
//				SE.push_back(Points[i]);
//			}
//		}
//
//		NW.shrink_to_fit();
//		Place(NW, MinX, MidX, MidY, MaxY);
//		NE.shrink_to_fit();
//		Place(NE, MidX, MaxX, MidY, MaxY);
//		SW.shrink_to_fit();
//		Place(SW, MinX, MidX, MinY, MidY);
//		SE.shrink_to_fit();
//		Place(SE, MidX, MaxX, MinY, MidY);
//
//	}
//}