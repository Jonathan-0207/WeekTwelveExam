#include "Fruit.h"

Fruit::Fruit(){}

Fruit::Fruit(std::string t, int u){
    Cargo::set_transport(t); 
    Cargo::set_units(u); 

}


void Fruit::cargoSold(bool b){
    if(Cargo::get_units() > 500){
        soldUnit = b; 
    }
}

bool Fruit::get_soldUnit(){
    if(Cargo::get_units() <= 500){
        return false;
    }
    return soldUnit; 
}
 
