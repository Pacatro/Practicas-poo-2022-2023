#include <cstdlib>
#include <iostream>
#include <cstdlib>
#include "app.h"

int main(){

    //-----Products-----
    Product p1("1734", "tv", 666.9), p2("4244", "pc", 7776), p3("9537", "car", 9999.9), p4("1384", "potato", 8.5), p5("3534", "cookie", 2.5);
   
    //-----Clients-----
    Client c1("1234"), c2("4234"), c3("1537"), c4("1344"), c5("3434");

    //-----Sellers-----
    Seller s1("1534"), s2("4298"), s3("7837"), s4("9044"), s5("1254");

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

    //-----Adding products to sellers-----
    market.add_product_seller(p1, s1.get_id());
    market.add_product_seller(p2, s1.get_id());
    market.add_product_seller(p3, s1.get_id());
    market.add_product_seller(p4, s1.get_id());
    market.add_product_seller(p5, s1.get_id());

    market.add_product_seller(p1, s2.get_id());
    market.add_product_seller(p2, s2.get_id());
    market.add_product_seller(p3, s2.get_id());
    market.add_product_seller(p4, s2.get_id());
    market.add_product_seller(p5, s2.get_id());

    market.add_product_seller(p1, s3.get_id());
    market.add_product_seller(p2, s3.get_id());
    market.add_product_seller(p3, s3.get_id());
    market.add_product_seller(p4, s3.get_id());
    market.add_product_seller(p5, s3.get_id());

    market.add_product_seller(p1, s4.get_id());
    market.add_product_seller(p2, s4.get_id());
    market.add_product_seller(p3, s4.get_id());
    market.add_product_seller(p4, s4.get_id());
    market.add_product_seller(p5, s4.get_id());

    market.add_product_seller(p1, s5.get_id());
    market.add_product_seller(p2, s5.get_id());
    market.add_product_seller(p3, s5.get_id());
    market.add_product_seller(p4, s5.get_id());
    market.add_product_seller(p5, s5.get_id());

    /*-----Adding products to clients-----
    market.add_product_client(p1, c1.get_id());
    market.add_product_client(p2, c2.get_id());
    market.add_product_client(p3, c3.get_id());
    market.add_product_client(p4, c4.get_id());
    market.add_product_client(p5, c5.get_id());*/
  
    bool init = true;
    int option;
    std::string client_id, product_id;
    Product p("");

    while(init){
        menu(market.get_slogan());
        std::cin>>option;

        switch(option){
            case 1:
                std::cout<<"\nCLIENT ID: ";
                std::cin>>client_id;

                std::cout<<"\nPRODUCT ID: ";
                std::cin>>product_id;
                
                p.set_id(product_id);

                market.add_product_seller(p, s2.get_id());

                if(!market.add_product_client(p, client_id)){
                    std::cout<<"\nERROR, CAN'T ADD PRODUCT TO CLIENT\n";
                }

            break;

            case 2:
                std::cout<<"\nCLIENT ID: ";
                std::cin>>client_id;

                std::cout<<"\nPRODUCT ID: ";
                std::cin>>product_id;
                
                p.set_id(product_id);

                if(!market.delete_product_client(p, client_id)){
                    std::cout<<"\nERROR, CAN'T DELETE PRODUCT TO CLIENT\n";
                }
                
            break;

            case 3:
                std::cout<<"\n"<<market.get_slogan() + " data in ventas.txt\n";
                market.dump_market();
            break;

            case 4:
                std::cout<<"EXIT\n";
                init = false;
            break;
        }
    
    }

    return 0;   
}