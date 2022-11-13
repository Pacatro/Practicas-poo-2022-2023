#include "app.h"

void menu(std::string slogan){
    std::cout<<"\n-----WELCOME TO "<<slogan<<"-----\n";
    std::cout<<"\n1. Add product to basket\n";
    std::cout<<"2. Delete product in basket\n";
    std::cout<<"3. Show data\n";
    std::cout<<"4. Exit\n";
    std::cout<<"\nOption -> ";
}

void add_product_to_basket(std::string client_id, std::string product_id, Market market){
    Product p(product_id);
    market.add_product_client(p, client_id);
}

void delete_product_in_basket(std::string client_id, std::string product_id, Market market){
    Product p(product_id);
    market.delete_product_client(p, client_id);    
}