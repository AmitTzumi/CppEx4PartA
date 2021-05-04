#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <map>
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
using namespace std;

namespace pandemic{
    class Player : public Board{
        public:
            City location;
            unordered_set<City> cards;
            Player();
            Player(Board b, City c);
            Player role();
            Player drive(City c);
            Player fly_direct(City c);
            Player fly_charter(City c);
            Player fly_shuttle(City c);
            void build();
            Player discover_cure(Color c);
            Player treat(City c);
            Player take_card(City c);
            

    };
    ostream& operator<<(ostream& out,Player p); // print Player type
}