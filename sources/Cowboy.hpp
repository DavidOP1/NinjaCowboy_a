#ifndef COWBOY_HPP
#define COWBOY_HPP

#include "Character.hpp"
namespace ariel{
    class Cowboy : public Character{
        public:
            Cowboy(string , Point);
            bool isAlive();
            double distance(Point * player);
            void hit(int damage);
            string getName();
            Point getLocation();
            string print();
            void shoot(Character *);
            bool hasbullets();
            void reload();  
        private:
            int bullets = 6 , health = 110 , damage = 10;
        };
}

#endif //COWBOY_HPP