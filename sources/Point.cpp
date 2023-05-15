#include "Point.hpp"
namespace ariel{
    Point::Point(){};
    Point::Point(const Point& other){};
    Point::Point(double x ,double y ){};
    double Point::distance(Point target){ return 0;};
    void Point::print(){};
    Point Point::moveTowards(Point src , Point dst , double distance){return Point(3,4);}; // returning copy , because we just need its cordinates.
    double Point::getXcord(){return 0;};
    double Point::getYcord(){ return 0;};
}