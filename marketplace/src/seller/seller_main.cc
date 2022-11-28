//seller_main.cc: Paco Algar
//Main program to prove Seller class

#include "seller.h"
#include <iostream>

int main(){

    Seller s("9673", "Ana", "Algar", "Calle2", "Lucena", "Cordoba", "Spain", 2022, "Market");

    std::string new_sector;

    std::cout<<"Default sector: "<<s.get_sector();

    std::cout<<"\nInsert new sector: ";

    std::cin>>new_sector;

    s.set_sector(new_sector);

    std::cout<<"New sector: "<<s.get_sector()<<"\n";

    return 0;
}