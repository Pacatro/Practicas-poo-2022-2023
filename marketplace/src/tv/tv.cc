//tv.cc: Paco Algar
//Defining Tv class functions

#include "tv.h"

bool Tv::set_inch(float inch){
    if(inch > 0){
        inch_ = inch;
        return true;
    }

    return false;
}