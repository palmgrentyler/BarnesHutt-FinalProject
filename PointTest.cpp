#include "TestHarness.h"
#include "Point.h"
#include <sstream>

TEST(Constructor, Point) {
    double x = 4;
    double y = 10;
    double mass = 30;
    double vecX = 43;
    double vecY = 0.0;

    Point p{x, y, mass, vecX, vecY}; //Contruct the point
    CHECK_DOUBLES_EQUAL(4.0, p.getX(), 0.0001); //Check the contents
    CHECK_DOUBLES_EQUAL(10.0, p.getY(), 0.0001);
    CHECK_DOUBLES_EQUAL(30.0, p.getMass(), 0.0001);
    CHECK_DOUBLES_EQUAL(43.0, p.getVecX(), 0.0001);
    CHECK_DOUBLES_EQUAL(0.0, p.getVecY(), 0.0001);
}

TEST(OverwriteValues, Point) {
    double x = 4;
    double y = 10;
    double mass = 30;
    double vecX = 43;
    double vecY = 0.0;

    Point p{ x, y, mass, vecX, vecY }; //Contruct the point

    p.setX(8.0);
    p.setY(60.4);
    p.setVecX(743.5);
    p.setVecY(31.34);

    CHECK_DOUBLES_EQUAL(8.0, p.getX(), 0.0001); //Check the contents
    CHECK_DOUBLES_EQUAL(60.4, p.getY(), 0.0001);
    CHECK_DOUBLES_EQUAL(30.0, p.getMass(), 0.0001);
    CHECK_DOUBLES_EQUAL(743.5, p.getVecX(), 0.0001);
    CHECK_DOUBLES_EQUAL(31.34, p.getVecY(), 0.0001);
}