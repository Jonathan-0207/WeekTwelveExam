#include "FoodPackage.h"


int FoodPackage::reportID = 0; 


FoodPackage::FoodPackage(){}

FoodPackage::FoodPackage(std::string t, int u){
    cargoID = reportID; 
    reportID = reportID + 1; 

    Cargo::set_transport(t);
    Cargo::set_units(u); 
    Cargo::set_cargoType("FoodPackage"); 
}


void FoodPackage::set_cargoID(int new_ID){cargoID = new_ID;}

void FoodPackage::set_reportID(int new_reportID){reportID = new_reportID;}


int FoodPackage::get_cargoID(){return cargoID;}

int FoodPackage::get_reportID(){return reportID;}


int FoodPackage::adjustExpiration(){
    if(Cargo::get_transport() == "Train"){
        int new_unit_amount = (Cargo::get_units() / 2); 
        return new_unit_amount; 
    }
    else return Cargo::get_units(); 
}