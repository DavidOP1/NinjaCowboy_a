#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Point.hpp"
#include <string>
#include <stdio.h>
using namespace std;
using namespace ariel;

class Character{
    public:
        virtual bool isAlive() = 0;
        virtual double distance(Point * player) = 0;
        virtual void hit(int damage) = 0;
        virtual string getName() = 0;
        virtual Point getLocation() = 0;
        virtual string print() = 0;
};

#endif // CHARACTER_HPP