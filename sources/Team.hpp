#ifndef TEAM_HPP
#define TEAM_HPP
//#include "Point.hpp"
#include "YoungNinja.hpp"
#include "TrainedNinja.hpp"
#include "OldNinja.hpp"
#include "Cowboy.hpp" // DONT NEED TO INCLUDE CHARACTER , BECAUSE ITS INCLUDED IN COWBOY
#include <vector>
namespace ariel{
class Team{
  public:
    Team(Character * Leader);
    void add(Character * player);
    void attack(Team * enemyTeam);
    int stillAlive();
    void print();
    ~Team();
  private:
    Character * leader;
    vector<Character *> warriors;

};
}
#endif // TEAM_HPP