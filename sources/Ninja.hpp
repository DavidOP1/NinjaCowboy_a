#ifndef NINJA_HPP
#define NINJA_HPP

#include "Character.hpp"
#include <iostream>
using namespace std;
class Ninja{
    protected:
        int speed , health;
        Point currentLocation;
    public:
        Ninja(int ninjaSpeed , Point location , int hp) : speed(ninjaSpeed) , currentLocation(location) , health(hp){
        }
        int getHealth(){return 0;};
        void move(Character * enemy){cout << enemy->getName();}
        void slash(Character * enemy){}
};

#endif //NINJA_HPP