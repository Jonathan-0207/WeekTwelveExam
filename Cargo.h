#ifndef CARGO_H
#define CARGO_H

#include <iostream>

class Cargo{
    private:
        std::string cargoType;
        std::string transport;
        int units;
    public:
        Cargo(); 
        Cargo(std::string t, std::string m, int u); 

        void set_units(int new_units); 
        void set_cargoType(std::string new_cargo);
        void set_transport(std::string new_transport);

        int get_units(); 
        std::string get_transport();
        std::string get_cargoType(); 

        virtual int adjustExpiration() = 0; 

};

#endif