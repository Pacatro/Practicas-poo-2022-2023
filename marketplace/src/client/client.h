// client.h: Paco Algar
// Defining class Client

#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include "../person/person.h"
#include "../basket/basket.h"

class Client: public Person, public Basket{
    private:
        int premium_;

    public:
        inline Client(std::string id, std::string name = "empty", std::string surname = "empty", 
                        std::string address = "empty", std::string town = "empty", std::string province = "empty", 
                        std::string country = "empty", int entry_year = 0, int premium = 0):
                        Person(id, name, surname, address, town, province, country, entry_year), premium_(premium){}
        
        inline ~Client(){}

        //Observers
        inline int get_premium() const {return premium_;}

        //Transformers
        inline void set_premium(int premium){premium_ = premium;}
};

#endif