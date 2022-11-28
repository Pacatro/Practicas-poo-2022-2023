//basket.h: Paco Algar
//A simple program to use Basket class

#include "basket.h"
#include <iostream>
#include <list>
#include <vector>

int main(){

    Basket basket;

    Product p1("3456", "PC GAMER", 920.5), p2("3896", "SMART TV", 2000.5), p3("4556", "CONTROLLER", 70.5),
            p4("9456", "XBOX", 420.56), p5("7856", "PLAYSTATION", 500.0), p6("1256", "NINTENDO", 470.56),
            p7("9456", "XBOX", 420.56), p8("7856", "PLAYSTATION", 500.0);

    basket.add_product(p1);
    basket.add_product(p2);
    basket.add_product(p3);
    basket.add_product(p4);
    basket.add_product(p5);
    basket.add_product(p6);

    std::vector<std::string> vector_ids;
    std::vector<int> vector_qs;

    vector_ids = basket.get_ids();
    vector_qs = basket.get_qs();

    std::cout<<"Number of products: "<<basket.get_size()<<"\n";

    std::cout<<"Quantity: ";
    for(int i : vector_qs){
        std::cout<<vector_qs[i]<<" ";
    }

    std::cout<<"\nIds: ";
    for(std::string i : vector_ids){
        std::cout<<i<<" ";
    }

    std::cout<<"\nPrice: "<<basket.get_total()<<"€\n";

    basket.add_product(p7);
    basket.add_product(p1);
    basket.add_product(p8);

    vector_ids = basket.get_ids();
    vector_qs = basket.get_qs();

    std::cout<<"\nNumber of products: "<<basket.get_size()<<"\n";

    std::cout<<"Quantity: ";
    for(int i : vector_qs){
        std::cout<<i<<" ";
    }

    std::cout<<"\nIds: ";
    for(std::string i : vector_ids){
        std::cout<<i<<" ";
    }

    std::cout<<"\nPrice: "<<basket.get_total()<<"€\n";

    for(int i = 0; i != vector_qs.size(); i++){
        if(vector_qs[i] == 1){
            basket.delete_product(vector_ids[i]);
        }
    }

    vector_ids = basket.get_ids();
    vector_qs = basket.get_qs();

    std::cout<<"\nNumber of products: "<<basket.get_size()<<"\n";

    std::cout<<"Quantity (i == 1): ";
    for(int i : vector_qs){
        std::cout<<i<<" ";
    }

    std::cout<<"\nIds (i == 1): ";
    for(std::string i : vector_ids){
        std::cout<<i<<" ";
    }

    std::cout<<"\nPrice (i == 1): "<<basket.get_total()<<"€\n";


    basket.add_product(p7);
    basket.add_product(p1);
    basket.add_product(p1);
    basket.add_product(p8);

    vector_ids = basket.get_ids();
    vector_qs = basket.get_qs();

    std::cout<<"\nNumber of products: "<<basket.get_size()<<"\n";

    std::cout<<"Quantity: ";
    for(int i : vector_qs){
        std::cout<<i<<" ";
    }

    std::cout<<"\nIds: ";
    for(std::string i : vector_ids){
        std::cout<<i<<" ";
    }

    std::cout<<"\nPrice: "<<basket.get_total()<<"€\n";

    for(int i = 0; i != vector_qs.size(); i++){
        if(vector_qs[i] > 1){
            basket.delete_product(vector_ids[i]);
        }
    }

    vector_ids = basket.get_ids();
    vector_qs = basket.get_qs();

    std::cout<<"\nNumber of products: "<<basket.get_size()<<"\n";

    std::cout<<"Quantity (i > 1): ";
    for(int i : vector_qs){
        std::cout<<i<<" ";
    }

    std::cout<<"\nIds (i > 1): ";
    for(std::string i : vector_ids){
        std::cout<<i<<" ";
    }

    std::cout<<"\nPrice (i > 1): "<<basket.get_total()<<"€\n";

    return 0;

}