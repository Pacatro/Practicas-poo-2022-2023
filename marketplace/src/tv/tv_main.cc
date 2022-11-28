//tv_main.cc: Paco Algar
//Main program to prove Tv class

#include "tv.h"
#include <iostream>

int main(){

    Tv tv("9086", "Tele", 9.8, "LG", "Mercadona", 24.5);

    std::cout<<"Id: "<<tv.get_id()<<"\nName: "<<tv.get_name();
    std::cout<<"\nInches: "<<tv.get_inch()<<"\n";
    return 0;

}