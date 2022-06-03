#ifndef FOODPACKAGE_H
#define FOODPACKAGE_H

#include "Cargo.h"

class FoodPackage : public Cargo{
    private: 
        int cargoID; 
        static int reportID;
    public:
        FoodPackage(); 
        FoodPackage(std::string t, int u); 

        void set_cargoID(int new_ID);
        void set_reportID(int new_reportID);

        int get_cargoID();
        int get_reportID(); 

        int adjustExpiration() override;
        
}; 

#endif