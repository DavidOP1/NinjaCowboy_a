#ifndef OLDNINJA_HPP
#define OLDNINJA_HPP

#include "Ninja.hpp"
namespace ariel{
    class OldNinja : public Character ,public Ninja{
        public:
            OldNinja(string , Point);
            bool isAlive();
            double distance(Point * player);
            void hit(int damage);
            string getName();
            Point getLocation();
            string print();
        private: 
            const int speed = 8;
            int health = 150; 
    };
}

#endif //OLDNINJA_HPP