//basket.cc: Paco Algar
//Defining Basket class funtions

#include "basket.h"

bool Basket::delete_product(const Product &product){
    std::list<Product>::iterator it;

    for(it = product_list_.begin(); it != product_list_.end(); it++){
        if(it->get_id() == product.get_id()){
            total_ -= product.get_price();
            
            product_quantity_[it->get_id()]--;

            if(product_quantity_[it->get_id()] == 0){
                product_list_.erase(it);
                product_quantity_.erase(it->get_id());
            }

            return true;
        }
    }

    return false;
}

bool Basket::delete_product(std::string id){
    std::list<Product>::iterator it;

    for(it = product_list_.begin(); it != product_list_.end(); it++){
        if(it->get_id() == id){
            total_ -= it->get_price();

            product_quantity_[it->get_id()]--;

            if(product_quantity_[it->get_id()] == 0){
                product_list_.erase(it);
                product_quantity_.erase(it->get_id());
            }

            return true;
        }
    }

    return false;
}

void Basket::add_product(const Product &product){
    if(!is_in_list(product)){
        product_list_.push_back(product);
        product_quantity_[product.get_id()] = 1;
    } else{
        product_quantity_[product.get_id()]++;
    }
    
    total_ += product.get_price();
}

std::vector <std::string> Basket::get_ids(){
    std::vector <std::string> vector_ids;
    std::list <Product>::iterator it;

    for(it = product_list_.begin(); it != product_list_.end(); it++){
        vector_ids.push_back(it->get_id());
    }

    return vector_ids;
}

std::vector <int> Basket::get_qs(){
    std::vector <int> vector_qs;
    std::list<Product>::iterator it;

    for(it = product_list_.begin(); it != product_list_.end(); it++){
        vector_qs.push_back(product_quantity_[it->get_id()]);
    }

    return vector_qs;
}

bool Basket::is_in_list(const Product &product){
    std::list<Product>::iterator it;

    for(it = product_list_.begin(); it != product_list_.end(); it++){
        if(it->get_id() == product.get_id()){
            return true;
        }
    }

    return false;
}