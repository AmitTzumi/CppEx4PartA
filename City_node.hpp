#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
//#include <map>
#include "Color.hpp"
#include "City.hpp"
#include <unordered_set>
using namespace std;

namespace pandemic{
    class City_node{
        public:
            City city;
            Color color;
            int level;
            unordered_set <City> neighbors;
            City_node(){
                city = Algiers;
                color = Red;
                level=0;
            }
            void operator=(int value){
            //cities[]
            }

            

        
    };
    
    
}