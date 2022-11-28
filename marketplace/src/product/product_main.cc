//product_main.cc: Paco Algar
//Main program to prove Product class

#include "product.h"
#include <iostream>

int main(){

    Product p("9086", "patata", 9.8, "fvgbhn", "fvgbhnj");

    std::cout<<"Id: "<<p.get_id()<<"\nName: "<<p.get_name();
    return 0;

}