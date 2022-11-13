#ifndef BASKET_H
#define BASKET_H

#include <string>
#include <list>
#include <map>
#include <vector>
#include "../product/product.h"

class Basket{
    private:
        std::list <Product> product_list_;
        std::map <std::string, int> product_quantity_;
        float total_;

    public:
        inline Basket(): total_(0.0){}
        inline ~Basket(){}

        inline float get_total() const {return total_;}
        void add_product(Product product);
        bool delete_product(Product product);
        bool delete_product(std::string id);
        bool is_in_list(Product product);
        inline void delete_basket(){product_list_.clear();}
        inline int get_size() const {return product_list_.size();}
        std::vector <std::string> get_ids(); 
        std::vector <int> get_qs();

};

#endif