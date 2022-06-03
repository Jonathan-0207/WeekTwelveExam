#include "Consignment.h"

Consignment::Consignment(){
    cargo_ptr = new Cargo*[5];
    cargo_ptr[0] = new Fruit("Train", 1000);
    cargo_ptr[1] = new FoodPackage("Automobile", 600); 
    cargo_ptr[2] = new FoodPackage("Truck", 100);
    cargo_ptr[3] = new FoodPackage("Train", 501);
    cargo_ptr[4] = new Fruit("Plane",500); 
}

Consignment::~Consignment(){delete[] cargo_ptr;}

Cargo** Consignment::get_cargo(){return cargo_ptr;}