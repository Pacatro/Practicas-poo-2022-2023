#include "computer.h"
#include <iostream>

int main(){

    Computer pc("9876", ComputerType::Laptop, "name", 900.5, "maker", "seller");

    std::cout<<"Price: "<<pc.get_price();

    if(pc.get_type() == ComputerType::Laptop){
        std::cout<<"\nIs a laptop\n";
    } else if(pc.get_type() == ComputerType::Gaming){
        std::cout<<"\nIs gaming\n";
    }

    return 0;

}