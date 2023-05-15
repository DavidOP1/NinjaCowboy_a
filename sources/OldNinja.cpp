#include "OldNinja.hpp"
namespace ariel{
            OldNinja::OldNinja(string name, Point location) : Ninja(8,location,150){};
            bool OldNinja::isAlive(){return true;};
            double OldNinja::distance(Point * player){return 0;};
            void OldNinja::hit(int damage){};
            string OldNinja::getName(){return "David";};
            Point OldNinja::getLocation(){return Point(3,4);};
            string OldNinja::print(){return "OldNinja";};
    }