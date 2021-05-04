#include "Board.hpp"

using namespace std;

namespace pandemic{

    Board::Board(){
        
       City_node c;
       c.city = Algiers;
       c.color = Black;
       c.level = 0;
       c.neighbors = {Madrid, Paris ,Istanbul, Cairo};
       cities.insert({Algiers, c});
       c.city = Atlanta;
       c.color = Blue;
       c.neighbors = {Chicago ,Miami, Washington};
       cities.insert({Atlanta, c});
       c.city = Baghdad;
       c.color = Black;
       c.neighbors = {Tehran, Istanbul, Cairo, Riyadh, Karachi};
       cities.insert({Baghdad, c});
       c.city = Bangkok;
       c.color = Red;
       c.neighbors = {Kolkata ,Chennai ,Jakarta ,HoChiMinhCity ,HongKong};
       cities.insert({Bangkok, c});
       c.city = Beijing;
       c.color = Red;
       c.neighbors = {Shanghai ,Seoul};
       cities.insert({Beijing, c});
       c.city = Bogota;
       c.color = Yellow;
       c.neighbors = {MexicoCity ,Lima ,Miami ,SaoPaulo ,BuenosAires};
       cities.insert({Bogota, c});
       c.city = BuenosAires;
       c.color = Yellow ;
       c.neighbors = {Bogota ,SaoPaulo};
       cities.insert({BuenosAires, c});
       c.city = Cairo;
       c.color = Black;
       c.neighbors = {Algiers, Istanbul ,Baghdad ,Khartoum, Riyadh};
       cities.insert({Cairo, c});
       c.city = Chennai;
       c.color = Black;
       c.neighbors = {Mumbai, Delhi ,Kolkata ,Bangkok ,Jakarta};
       cities.insert({Chennai, c});
       c.city = Chicago;
       c.color = Blue;
       c.neighbors = {SanFrancisco ,LosAngeles ,MexicoCity ,Atlanta ,Montreal};
       cities.insert({Chicago, c});
       c.city = Delhi;
       c.color = Black;
       c.neighbors = {Tehran ,Karachi ,Mumbai ,Chennai ,Kolkata};
       cities.insert({Delhi, c});
       c.city = Essen;
       c.color = Blue;
       c.neighbors = {London ,Paris ,Milan ,StPetersburg};
       cities.insert({Essen, c});
       c.city = HoChiMinhCity;
       c.color = Red;
       c.neighbors = {Jakarta ,Bangkok ,HongKong ,Manila};
       cities.insert({HoChiMinhCity, c});
       c.city = HongKong;
       c.color = Red;
       c.neighbors = {Bangkok ,Kolkata ,HoChiMinhCity ,Shanghai ,Manila ,Taipei};
       cities.insert({HongKong, c});
       c.city = Istanbul;
       c.color = Black;
       c.neighbors = {Milan ,Algiers ,StPetersburg ,Cairo ,Baghdad ,Moscow};
       cities.insert({Istanbul, c});
       c.city = Jakarta;
       c.color = Red;
       c.neighbors = {Chennai ,Bangkok ,HoChiMinhCity ,Sydney};
       cities.insert({Jakarta, c});
       c.city = Johannesburg;
       c.color = Yellow;
       c.neighbors = {Kinshasa ,Khartoum};
       cities.insert({Johannesburg, c});
       c.city = Karachi;
       c.color = Black;
       c.neighbors = {Tehran ,Baghdad ,Riyadh ,Mumbai ,Delhi};
       cities.insert({Karachi, c});
       c.city = Khartoum;
       c.color = Yellow;
       c.neighbors = {Cairo ,Lagos ,Kinshasa ,Johannesburg};
       cities.insert({Khartoum, c});
       c.city = Kinshasa;
       c.color = Yellow;
       c.neighbors = {Lagos ,Khartoum ,Johannesburg};
       cities.insert({Kinshasa, c});
       c.city = Kolkata;
       c.color = Black;
       c.neighbors = {Delhi ,Chennai ,Bangkok ,HongKong};
       cities.insert({Kolkata, c});
       c.city = Lagos;
       c.color = Yellow;
       c.neighbors = {SaoPaulo ,Khartoum ,Kinshasa};
       cities.insert({Lagos, c});
       c.city = Lima;
       c.color = Yellow;
       c.neighbors = {MexicoCity ,Bogota ,Santiago};
       cities.insert({Lima, c});
       c.city = London;
       c.color = Blue;
       c.neighbors = {NewYork ,Madrid ,Essen ,Paris};
       cities.insert({London, c});
       c.city = LosAngeles;
       c.color = Yellow;
       c.neighbors = {SanFrancisco ,Chicago ,MexicoCity ,Sydney};
       cities.insert({LosAngeles, c});
       c.city = Madrid;
       c.color = Blue;
       c.neighbors = {London ,NewYork ,Paris ,SaoPaulo ,Algiers};
       cities.insert({Madrid, c});
       c.city = Manila;
       c.color = Red;
       c.neighbors = {Taipei ,SanFrancisco ,HoChiMinhCity ,Sydney};
       cities.insert({Manila, c});
       c.city = MexicoCity;
       c.color = Yellow;
       c.neighbors = {LosAngeles ,Chicago ,Miami ,Lima ,Bogota};
       cities.insert({MexicoCity, c});
       c.city = Miami;
       c.color = Yellow;
       c.neighbors = {Atlanta ,MexicoCity ,Washington ,Bogota};
       cities.insert({Miami, c});
       c.city = Milan;
       c.color = Blue;
       c.neighbors = {Essen ,Paris ,Istanbul};
       cities.insert({Milan, c});
       c.city = Montreal;
       c.color = Blue;
       c.neighbors = {Chicago ,Washington ,NewYork};
       cities.insert({Montreal, c});
       c.city = Moscow;
       c.color = Black;
       c.neighbors = {StPetersburg ,Istanbul ,Tehran};
       cities.insert({Moscow, c});
       c.city = Mumbai;
       c.color = Black;
       c.neighbors = {Karachi ,Delhi ,Chennai};
       cities.insert({Mumbai, c});
       c.city = NewYork;
       c.color = Blue;
       c.neighbors = {Montreal ,Washington ,London ,Madrid};
       cities.insert({NewYork, c});
       c.city = Osaka;
       c.color = Red;
       c.neighbors = {Taipei ,Tokyo};
       cities.insert({Osaka, c});
       c.city = Paris;
       c.color = Blue;
       c.neighbors = {Algiers ,Essen ,Madrid ,Milan ,London};
       cities.insert({Paris, c});
       c.city = Riyadh;
       c.color = Black;
       c.neighbors = {Baghdad ,Cairo ,Karachi};
       cities.insert({Riyadh, c});
       c.city = SanFrancisco;
       c.color = Blue;
       c.neighbors = {LosAngeles ,Chicago ,Tokyo ,Manila};
       cities.insert({SanFrancisco, c});
       c.city = Santiago;
       c.color = Yellow;
       c.neighbors = {Lima};
       cities.insert({Santiago, c});
       c.city = SaoPaulo;
       c.color = Yellow;
       c.neighbors = {Bogota ,BuenosAires ,Lagos ,Madrid};
       cities.insert({SaoPaulo, c});
       c.city = Seoul;
       c.color = Red;
       c.neighbors = {Beijing ,Shanghai ,Tokyo};
       cities.insert({Seoul, c});
       c.city = Shanghai;
       c.color = Red;
       c.neighbors = {Beijing ,HongKong ,Taipei ,Seoul ,Tokyo};
       cities.insert({Shanghai, c});
       c.city = StPetersburg;
       c.color = Blue;
       c.neighbors = {Essen ,Istanbul ,Moscow};
       cities.insert({StPetersburg, c});
       c.city = Sydney;
       c.color = Red;
       c.neighbors = {Jakarta ,Manila ,LosAngeles};
       cities.insert({Sydney, c});
       c.city = Taipei;
       c.color = Red;
       c.neighbors = {Shanghai ,HongKong ,Osaka ,Manila};
       cities.insert({Taipei, c});
       c.city = Tehran;
       c.color = Black;
       c.neighbors = {Baghdad ,Moscow ,Karachi ,Delhi};
       cities.insert({Tehran, c});
       c.city = Tokyo;
       c.color = Red;
       c.neighbors = {Seoul ,Shanghai ,Osaka ,SanFrancisco};
       cities.insert({Tokyo, c});
       c.city = Washington;
       c.color = Blue;
       c.neighbors = {Atlanta ,NewYork ,Montreal ,Miami};
       cities.insert({Washington, c});
       
    }

    City_node& Board::operator[](City c){
        return cities[c];
    }

    bool Board::is_clean(){
        map<City, City_node>::iterator itr; 
        for (itr =  cities.begin(); itr !=  cities.end(); ++itr) { 
            if(itr->second.level!=0){
                return false;
            }
        } 
        return true;
    }

    ostream& operator<<(ostream& out, Board b){ // print Board type
        map<City, City_node>::iterator itr; 
        for (itr =  b.cities.begin(); itr !=  b.cities.end(); ++itr) {
            //out << *itr.
            } 
            return out;
    }

    ostream& operator<<(ostream& out, City_node c){ // print City_node type
        return out << "Hello";
    }

    
}