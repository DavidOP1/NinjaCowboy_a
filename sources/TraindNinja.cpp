#include "TrainedNinja.hpp"

namespace ariel{
            TrainedNinja::TrainedNinja(string name , Point location): Ninja(12,location,120) {};
            bool TrainedNinja::isAlive(){return true;};
            double TrainedNinja::distance(Point * player){return 0;};
            void TrainedNinja::hit(int damage){};
            string TrainedNinja::getName(){return "David";};
            Point TrainedNinja::getLocation(){return Point(3,4);};
            string TrainedNinja::print(){return "TrainedNinja";};
}