#include <stdio.h>

namespace ariel{
    class Point{
    public:
        Point();
        Point(double,double);
        Point(const Point&);
        double distance(Point);
        void print();
        Point moveTowards(Point , Point , double ); // returning copy , because we just need its cordinates.
        double getXcord();
        double getYcord();
    private:
        double xCord , yCord;
    };
}