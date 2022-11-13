#include "market.h"

bool Market::add_client(Client client){
    if(!client_in_list_(client)){
        client_list_.push_back(client);
        return true;
    }

    return false;
}

bool Market::add_seller(Seller seller){
    if(!seller_in_list_(seller)){
        seller_list_.push_back(seller);
        return true;
    }

    return false;
}

bool Market::delete_client(Client client){
    std::list<Client>::iterator it;

    for(it = client_list_.begin(); it != client_list_.end(); it++){
        if(it->get_id() == client.get_id()){
            client_list_.erase(it);
            return true;
        }
    }

    return false;

}

bool Market::delete_seller(Seller seller){
    std::list<Seller>::iterator it;

    for(it = seller_list_.begin(); it != seller_list_.end(); it++){
        if(it->get_id() == seller.get_id()){
            seller_list_.erase(it);
            return true;
        }
    }

    return false;

}

//NO FUNCIONAAAAAAAAAAAAAAA
bool Market::add_product_client(Product p, std::string id_client){
    for(auto it = seller_list_.begin(); it != seller_list_.end(); it++){
        if(delete_product_seller(p, it->get_id())){
            for(auto it = client_list_.begin(); it != client_list_.end(); it++){
                if(it->get_id() == id_client){
                    it->add_product(p);
                    return true;
                }
            }
        }
    }

    return false;
}

bool Market::add_product_seller(Product p, std::string id_seller){
    Seller seller(id_seller);

    if(seller_in_list_(seller)){
        seller.add_product(p);
        return true;
    }

    return false;
}

bool Market::delete_product_client(Product p, std::string id_client){
    Client client(id_client);
    
    if(client_in_list_(client)){
        client.delete_product(p);
        return true;
    }

    return false;
}

bool Market::delete_product_seller(Product p, std::string id_seller){
    for(auto it_seller = seller_list_.begin(); it_seller != seller_list_.end(); it_seller++){
        if(it_seller->get_id() == id_seller && it_seller->delete_product(p)){
            
        }
    }

    return false;
}

float Market::get_money_in_basket(){
    float total_price_baskets = 0.0;

    for(auto it = client_list_.begin(); it != client_list_.end(); it++){
        //total_price_baskets += it->get_total();
    }

    return total_price_baskets;
}

void Market::dump_market(){
    std::ofstream file;

    file.open("ventas.txt");

    if(!file) std::cout<<"ERROR, CAN'T OPEN FILE\n";

    std::list<Client>::iterator it_client;

    file << "|CIENT ID | PRODUCT ID | PRODUCT QTY | PRICE U.|\n";

    for(it_client = client_list_.begin(); it_client != client_list_.end(); it_client++){
        //GET ID CLIENT
        file << "| " << it_client->get_id() <<"    | ";

        //GET IDS PRODUCTS
        for(std::string id : it_client->get_ids()){
            file<<id << "       | ";
        }

        //GET QUANTITYS PRODUCTS
        for(int qs : it_client->get_qs()){
            file << qs << "           | ";
        }

        //GET PRICES PRODUCTS
        std::list<Product> list_product = it_client->get_product_list();
        std::list<Product>::iterator it_product;

        for(it_product = list_product.begin(); it_product != list_product.end(); it_product++){
            file << it_product->get_price() << "       | ";
        }

        file << "\n";
    }

    file << "\nTOTAL: " << get_money_in_basket();

    file.close();
}

/*------------------
    ADITIONAL
-------------------*/

bool Market::client_in_list_(Client client){
    std::list<Client>::iterator it;

    for(it = client_list_.begin(); it != client_list_.end(); it++){
        if(it->get_id() == client.get_id()){
            return true;
        }
    }

    return false;
}

bool Market::client_in_list_(std::string client_id){
    std::list<Client>::iterator it;

    for(it = client_list_.begin(); it != client_list_.end(); it++){
        if(it->get_id() == client_id){
            return true;
        }
    }

    return false;
}

bool Market::product_in_seller_stock_(Product p){

    for(auto it = seller_list_.begin(); it != seller_list_.end(); ++it){
        if(it->delete_product(p)){
            return true;
        }
    }

    return false;
}

bool Market::seller_in_list_(Seller seller){
    std::list<Seller>::iterator it;

    for(it = seller_list_.begin(); it != seller_list_.end(); it++){
        if(it->get_id() == seller.get_id()){
            return true;
        }
    }

    return false;
}