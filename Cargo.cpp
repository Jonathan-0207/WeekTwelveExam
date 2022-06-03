#include "Cargo.h"

    
Cargo::Cargo(std::string t, std::string m, int u){
    transport = m; 
    cargoType = t;
    units = u; 
}

Cargo::Cargo(){}


void Cargo::set_units(int new_units){units = new_units;}

void Cargo::set_cargoType(std::string new_cargo){new_cargo = cargoType;}

void Cargo::set_transport(std::string new_transport){transport = new_transport;}


int Cargo::get_units(){return units;}

std::string Cargo::get_transport(){return transport;}

std::string Cargo::get_cargoType(){return cargoType;}