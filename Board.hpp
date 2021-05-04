#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <map>
#include "City_node.hpp"
#include "City.hpp"
#include <unordered_set>
//using namespace std;

namespace pandemic{
    class Board{
        public:
            map <City,City_node> cities;
            unordered_set <City> research_stations;
            Board();
            City_node& operator[](City c); 
            bool is_clean();
 
    };
    ostream& operator<<(ostream& out, Board b); // print Board type

    ostream& operator<<(ostream& out, City_node c); // print City_node type
                
    
                

    }