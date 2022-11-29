//market.cc: Paco Algar
//Defining Market class funtions

#include "market.h"

bool Market::add_client(const Client &client){
    std::list<Client>::iterator it;

    for(it = client_list_.begin(); it != client_list_.end(); it++){
        if(client.get_id() == it->get_id()){
            return false;
        }
    }

    client_list_.push_back(client);
    return true;
}

bool Market::add_seller(const Seller &seller){
    std::list<Seller>::iterator it;

    for(it = seller_list_.begin(); it != seller_list_.end(); it++){
        if(seller.get_id() == it->get_id()){
            return false;
        }
    }

    seller_list_.push_back(seller);
    return true;
}

bool Market::delete_client(const Client &client){
    for(auto it = client_list_.begin(); it != client_list_.end(); it++){
        if(it->get_id() == client.get_id()){
            client_list_.erase(it);
            return true;
        }
    }

    return false;
}

bool Market::delete_seller(const Seller &seller){
    for(auto it = seller_list_.begin(); it != seller_list_.end(); it++){
        if(it->get_id() == seller.get_id()){
            seller_list_.erase(it);
            return true;
        }
    }

    return false;
}

bool Market::add_product_client(const Product &p, std::string id_client){
    if(product_on_sale_(p.get_id())){
        for(auto it = client_list_.begin(); it != client_list_.end(); it++){
            if(it->get_id() == id_client){
                it->add_product(p);
                return true;
            }
        }
    }

    return false;
}

bool Market::add_product_seller(const Product &p, std::string id_seller){
    for(auto it = seller_list_.begin(); it != seller_list_.end(); it++){
        if(it->get_id() == id_seller){
            it->add_product(p);
            return true;
        }
    }

    return false;

}

bool Market::delete_product_client(const Product &p, std::string id_client){
    for(auto it = client_list_.begin(); it != client_list_.end(); it++){
        if(it->get_id() == id_client){
            for(auto id : it->get_ids()){
                if(id == p.get_id()){
                    it->delete_product(p);
                    return true;
                }
            }       
        }
    }

    return false;
}

bool Market::delete_product_seller(const Product &p, std::string id_seller){
    for(auto it = seller_list_.begin(); it != seller_list_.end(); it++){
        if(it->get_id() == id_seller){
            for(auto id : it->get_ids()){
                if(id == p.get_id()){
                    it->delete_product(p);
                    return true;
                }
            }       
        }
    }

    return false;
}

float Market::get_money_in_basket(){
    float total_basket = 0.0;

    for(auto it = client_list_.begin(); it != client_list_.end(); it++){
        total_basket += it->get_total();
    }

    return total_basket;
}

void Market::dump_market(){
    std::ofstream file;

    file.open("ventas.txt");

    if(!file) std::cout<<"ERROR: Can't open file\n";
    
    file << "|-------------------------------------|\n";
    file << "|CLIENT ID | PRODUCT ID | PRODUCT QTY |\n";
    file << "|-------------------------------------|\n";

    for(auto it = client_list_.begin(); it != client_list_.end(); it++){
        std::vector<std::string> ids_products = it->get_ids();
        std::vector<int> qs_products = it->get_qs();


        for(int i = 0; i<it->get_size(); i++){
            file<<"|"<< it->get_id()<< "        |"<< ids_products[i]<< "          |"<< qs_products[i]<< "            |\n";
        }
    }

    file << "|-------------------------------------|\n";
    file << "|TOTAL: " << get_money_in_basket()<<" €                         |\n";
    file << "|-------------------------------------|\n";

    file.close();
}

/*-----------
ADITIONAL
------------*/

bool Market::product_on_sale_(std::string product_id){
    for(auto it = seller_list_.begin(); it != seller_list_.end(); it++){
        for(auto id : it->get_ids()){
            if(product_id == id){
                it->delete_product(product_id);
                return true;
            }
        }
    }

    return false;
}