#ifndef TRAINEDNINJA_HPP
#define TRAINEDNINJA_HPP

#include "Ninja.hpp"
namespace ariel{
    class TrainedNinja : public Character , public Ninja{
        public:
            TrainedNinja(string , Point);
            bool isAlive();
            double distance(Point * player);
            void hit(int damage);
            string getName();
            Point getLocation();
            string print();
        private:
            const int speed = 12;
            int health = 120;
    };
}

#endif //TRAINEDNINJA_HPP