#ifndef SELLER_H
#define SELLER_H

#include <string>
#include <list>
#include "../person/person.h"
#include "../product/product.h"
#include "../basket/basket.h"

class Seller: public Person, public Basket{
    private:
        std::string sector_;

        //Aditional
        bool product_in_stok_(Product p);
    public:
        inline Seller(std::string id, std::string name = "empty", std::string surname = "empty", 
                        std::string address = "empty", std::string town = "empty", std::string province = "empty", 
                        std::string country = "empty", int entry_year = 0, std::string sector = ""):
                        Person(id, name, surname, address, town, province, country, entry_year), sector_(sector){}

        inline std::string get_sector() const {return sector_;}
        inline void set_sector(std::string sector){sector_ = sector;}

        inline float get_total() {return get_total();}        
};

#endif