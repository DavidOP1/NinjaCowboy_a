
#include "Cowboy.hpp"

namespace ariel{
            Cowboy::Cowboy(string name ,Point location){};
            bool Cowboy::isAlive(){return true;};
            double Cowboy::distance(Point * player){return 0;};
            void Cowboy::hit(int damage){};
            string Cowboy::getName(){return "david is a cowboy";};
            Point Cowboy::getLocation(){return Point(4,5);};
            string Cowboy::print(){return "cowboy";};
            void Cowboy::shoot(Character * enemy){};
            bool Cowboy::hasbullets(){return true;};
            void Cowboy::reload(){}; 
}