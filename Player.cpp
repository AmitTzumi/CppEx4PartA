#include "Player.hpp"

using namespace std;

namespace pandemic{

    Player::Player(){
                
    }

    Player::Player(Board b, City c){
        this->location = c;
    }

    Player Player::role(){
        return *this;
    }

    Player Player::drive(City c){
        try{
            if(cities[this->location].neighbors.contains(c)){
                this->location = c;
                return *this;
            }
            throw "You can not drive this city because they are not neighbors";
        }
        catch(const char* msg){
            cerr << msg << endl;
        }
        return *this;
    }

    Player Player::fly_direct(City c){
        try{
            if(cards.contains(c)){
                cards.erase(c);
                this->location = c;
                return *this;
            }
            else{
                throw "You do not have the city card to fly_direct";
            }
        }
        catch(const char* msg){
            cerr << msg << endl;
        }
        return *this;
    }

    Player Player::fly_charter(City c){
        try{
            if(cards.contains(this->location)){
                cards.erase(this->location);
                this->location = c;
                return *this;
            }
            else{
                throw "You do not have the city you are standing on";
            }
        }
        catch(const char* msg){
            cerr << msg << endl;
        }
        return *this;
    }

    Player Player::fly_shuttle(City c){
        try{
            if(research_stations.contains(this->location) && research_stations.contains(c)){
                this->location = c;
                return *this;
            }
            else{
                throw "You can not move this city using fly_shuttle";
            }
        }
        catch(const char* msg){
            cerr << msg << endl;
        }
        return *this;
    }

    void Player::build(){
        if(!research_stations.contains(this->location)){
            if(cards.contains(this->location)){
                cards.erase(this->location);
                research_stations.insert(this->location);
            }
        }
    }

    Player Player::discover_cure(Color c){
        try{
            int count =0;
            for(auto itr = cards.begin(); itr != cards.end(); ++itr){
                if(cities[*itr].color == c){
                    count++;
                }
            }
            if(count >= 5){
                count =0;
                for(auto itr = cards.begin(); itr != cards.end(); ++itr){
                    if(cities[*itr].color == c){
                        cards.erase(*itr);
                        count++;
                        if(count == 5){
                            break;
                        }
                    }
                }
            }
            else{
                throw "There is not enough cards in this color";
            }
            return *this;
            }
        catch(const char* msg){
            cerr << msg << endl;
        }
        return *this;
    }

    Player Player::treat(City c){
        try{
            if(cities[c].level == 0){
                throw "You can not treat when level is 0";
            }
            cities[c].level = cities[c].level-1;
            return *this;
        }
        catch(const char* msg){
            cerr << msg << endl;
        }
        return *this;
    }

    Player Player::take_card(City c){
        for(auto itr = cards.begin(); itr!=cards.end(); ++itr){
            if(*itr == c){
                return *this;
            }
        }
        this->cards.insert(c);
        return *this;
    }

    ostream& operator<<(ostream& out,Player p){
        return out;
    }
}