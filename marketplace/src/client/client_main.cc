//client_main.cc: Paco Algar
//Main program to prove Client class

#include "client.h"
#include <iostream>

int main(){

    Client c("9873", "Paco", "Algar", "Calle", "Lucena", "Cordoba", "Spain", 2022, 5);

    int new_premium;

    std::cout<<"Default premium: "<<c.get_premium();

    std::cout<<"\nInsert new premium: ";

    std::cin>>new_premium;

    c.set_premium(new_premium);

    std::cout<<"New premium: "<<c.get_premium()<<"\n";

    return 0;
}