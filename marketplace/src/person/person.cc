#include "person.h"
#include <string>

bool Person::set_entry_year(int entry_year){
    if(entry_year > 2000){
        entry_year_ = entry_year;
        return true;
    }

    return false;
}

std::string Person::get_full_address(){
    std::string full_address = name_ + " " + surname_ + "\n" 
                                + address_ + "\n" 
                                + town_ + ", " + province_ + "\n"
                                + country_ + "\n";

    return full_address;  
}