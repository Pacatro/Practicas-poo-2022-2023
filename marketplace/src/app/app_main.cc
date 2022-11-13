#include <cstdlib>
#include <iostream>
#include "app.h"

int main(){

    //-----Products-----
    Product p1("1734"), p2("4244"), p3("9537"), p4("1384"), p5("3534");
   
    //-----Clients-----
    Client c1("1234"), c2("4234"), c3("1537"), c4("1344"), c5("3434");
    c1.add_product(p1);
    c2.add_product(p2);
    c3.add_product(p3);
    c4.add_product(p4);
    c5.add_product(p5);

    //-----Sellers-----
    Seller s1("1534"), s2("4298"), s3("7837"), s4("9044"), s5("1254");
    s1.add_product(p1);
    s2.add_product(p2);
    s3.add_product(p3);
    s4.add_product(p4);
    s5.add_product(p5);

    //-----Market-----
    Market market("MARKETPLACE");


    //-----Adding clients to market-----
    market.add_client(c1);
    market.add_client(c2);
    market.add_client(c3);
    market.add_client(c4);
    market.add_client(c5);

    //-----Adding sellers to market-----
    market.add_seller(s1);
    market.add_seller(s2);
    market.add_seller(s3);
    market.add_seller(s4);
    market.add_seller(s5);
    
    bool init = true;
    int option;
    std::string client_id, product_id;

    while(init){
        menu(market.get_slogan());
        std::cin>>option;

        switch(option){
            case 1:
                std::cout<<"\nCLIENT ID: ";
                std::cin>>client_id;
                std::cout<<"\nPRODUCT ID: ";
                std::cin>>product_id;
                add_product_to_basket(client_id, product_id, market);
            break;

            case 2:
                std::cout<<"\nCLIENT ID: ";
                std::cin>>client_id;
                std::cout<<"\nPRODUCT ID: ";
                std::cin>>product_id;
                delete_product_in_basket(client_id, product_id, market);
            break;

            case 3:
                show_data(market);
            break;

            case 4:
                init = false;
            break;

            default:
                std::cout<<"NON VALID OPTION";
            break;
            
        }

    }
    
    return 0;
}