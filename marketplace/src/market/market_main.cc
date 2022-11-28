//market_main.cc: Paco Algar
//Main program to prove Market class

#include "market.h"

int main(){

    Market market("SLOGAN");

    std::cout<<market.get_slogan()<<"\n";

    Seller s1("S1"), s2("S2");
    Client c1("C1"), c2("C2");
    Product p1("P1", "tv", 2345.9);
    Product p2("P2", "PC", 1378.5);

    market.add_client(c1);
    market.add_client(c2);

    market.add_seller(s1);
    market.add_seller(s2);

    market.add_product_client(p1, "C1");
    market.add_product_client(p2, "C2");
    

    std::cout<<market.get_money_in_basket();
    
    market.dump_market();

    return 0;
}