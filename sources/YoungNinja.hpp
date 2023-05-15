#ifndef YOUNGNINJA_HPP
#define YOUNGNINJA_HPP
#include "Ninja.hpp"
namespace ariel{
    class YoungNinja : public Character , public Ninja{
        public:
            YoungNinja(string , Point);
            bool isAlive();
            double distance(Point * player);
            void hit(int damage);
            string getName();
            Point getLocation();
            string print();
        private:
            const int speed = 14;
            int health = 100;
    };
}

#endif //YOUNGNINJA_HPP