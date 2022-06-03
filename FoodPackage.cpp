#include "FoodPackage.h"


int FoodPackage::reportID = 0; 


FoodPackage::FoodPackage(){}

FoodPackage::FoodPackage(std::string t, int u){
    cargoID = reportID; 
    reportID = reportID + 1; 
}


void FoodPackage::set_cargoID(int new_ID){cargoID = new_ID;}

void FoodPackage::set_reportID(int new_reportID){reportID = new_reportID;}


int FoodPackage::get_cargoID(){return cargoID;}

int FoodPackage::get_reportID(){return reportID;}


int FoodPackage::adjustExpiration(){
    if(Cargo::get_cargoType() == "Train"){
        return Cargo::get_units() / 2; 
    }
    else return Cargo::get_units(); 
}