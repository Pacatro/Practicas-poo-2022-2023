// tv.h: Paco Algar
// Defining class Tv

#ifndef TV_H
#define TV_H

#include <string>
#include "../product/product.h"

class Tv: public Product{
    private:
        float inch_;

    public:
        inline Tv(std::string id, std::string name = "empty", float price = 0.0, std::string maker = "empty", 
                  std::string seller = "empty", float inch = 0.0): 
                        Product(id, name, price, maker, seller), inch_(inch){}

        inline ~Tv(){}

        inline float get_inch() const {return inch_;}

        bool set_inch(float inch);
     
};

#endif