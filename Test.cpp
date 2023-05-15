#include "doctest.h"
#include "Team.hpp"
using namespace ariel;

TEST_CASE("CHECK DISTANCE"){
    Point p1(1,-3);
    Point p2(3,6);
    Point p3(0,0);
    Point p4(4,0);
    Point p5(1,5);
    Point p6(8,1);
    CHECK(p1.distance(p2)==p2.distance(p1));
    CHECK(p5.distance(p6)==19);
    CHECK(p4.distance(p3)==4);
    CHECK(p4.distance(p4)==0);
}

TEST_CASE("CHECK MOVE TOWARDS"){
    Point p1(1,-3);
    Point p2(3,6);
    double dist = p1.distance(p2)/2;
    Point p3(p1.moveTowards(p1,p2,dist));
    dist/=3;
    Point p4(p1.moveTowards(p1,p2,dist));
    CHECK(p1.distance(p3) == p3.distance(p1));
    CHECK(p1.distance(p4)==5*p4.distance(p2));
}
TEST_CASE("CREATE CHARACTERS"){
    Point p5(1,5);
    Point p6(8,1);
    Cowboy * a = new Cowboy("Woody" ,p5);
    OldNinja * b = new OldNinja("Chan" ,p6);
    YoungNinja * c = new YoungNinja("Chan" ,p6);
    TrainedNinja * d = new TrainedNinja("Chan" ,p6);
    CHECK(b->getHealth()==150);
    CHECK(c->getHealth()==100);
    CHECK(d->getHealth()==120);
    //old speed is 8 , trained 12 , young 14
    b->move(a);
    c->move(a);
    d->move(a);
    //b->getLocation().distance(a);
    CHECK((b->getLocation().distance(a->getLocation()))==11);
    CHECK(c->getLocation().distance(a->getLocation())==5);
    CHECK(d->getLocation().distance(a->getLocation())==7);

    CHECK(b->getName() == "Chan");
    CHECK(a->getName() == "Woody");
    int bullets = 6;
    while(a->hasbullets()&&bullets!=0){
        a->shoot(b);
        a->shoot(c);
        a->shoot(d);
        bullets-=3;
    }
    
    CHECK(b->getHealth()==130);
    CHECK(c->getHealth()==80);
    CHECK(d->getHealth()==100);
    a->reload();
    CHECK(a->hasbullets());
}
TEST_CASE("TEAM"){
    Point p5(1,5);
    Point p6(8,1);
    Point p7(3,5);
    Point p8(1,8);
    Cowboy * a = new Cowboy("Woody" ,p5);
    Team team_a(a);
    team_a.add(new Cowboy("Woody2" ,p6));
    team_a.add(new Cowboy("Woody3" ,p7));
    TrainedNinja * d = new TrainedNinja("Chan" ,p8);
    Team team_b(d);
    
    team_a.attack(&team_b);
    team_a.attack(&team_b);
    team_a.attack(&team_b);
    team_a.attack(&team_b);
    CHECK(team_a.stillAlive()==3);
    CHECK(team_b.stillAlive()==0);
}