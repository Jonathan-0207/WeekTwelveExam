#ifndef FRUIT_H
#define FRUIT_h

#include "FoodPackage.h"

class Fruit : public FoodPackage{
    private:
        bool soldUnit; 
    public:
        Fruit(); 
        Fruit(std::string t, int u);

        void cargoSold(bool b); 
        bool get_soldUnit(); 



}; 


#endif