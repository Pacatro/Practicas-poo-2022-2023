#include "person.h"
#include <iostream>
#include <string>

int main(){

    Person person1("89567", "Paco", "Algar", "Plaza Maestro Fraquito Espada", "Lucena", "Córdoba", "España", 2022);

    std::cout<<"Nombre: "<<person1.get_name();

    return 0;

}