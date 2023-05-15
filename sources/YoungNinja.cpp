#include "YoungNinja.hpp"
namespace ariel{
            YoungNinja::YoungNinja(string name , Point location): Ninja(14,location,100) {};
            bool YoungNinja::isAlive(){return true;};
            double YoungNinja::distance(Point * player){return 0;};
            void YoungNinja::hit(int damage){};
            string YoungNinja::getName(){return "David";};
            Point YoungNinja::getLocation(){return Point(3,4);};
            string YoungNinja::print(){return "YoungNinja";};
}