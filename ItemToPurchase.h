//
//  ItemToPurchase.hpp
//  Lab 7
//
//  Created by Westley Holden on 10/1/19.
//

#ifndef ItemToPurchase_h
#define ItemToPurchase_h
#include <iostream>
#include <string>

class ItemToPurchase {
    public:
        void SetName(string userName);
        void GetName();
        void SetPrice(double userPrice);
        void GetPrice();
        void SetQuantity(int userQuantity);
        void GetQuantity();
    
    private:
        string itemName;
        double itemPrice;
        int itemQuantity;
};
#endif /* ItemToPurchase_hpp */
