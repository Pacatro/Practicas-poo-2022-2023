#include "seller.h"

bool Seller::product_in_stok_(Product p){
    for(auto it = get_product_list().begin(); it != get_product_list().end(); it++){
        if(it->get_id() == p.get_id()){
            return true;
        }
    }

    return false;
}