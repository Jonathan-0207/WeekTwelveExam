#ifndef CONSIGNMENT_H
#define CONSIGNMENT_H

#include "Fruit.h"

class Consignment : public Fruit{
    private:
        Cargo** cargo_ptr; 
    
    public:
        ~Consignment(); 
        Cargo** get_cargo();
        Consignment(); 



}; 

#endif