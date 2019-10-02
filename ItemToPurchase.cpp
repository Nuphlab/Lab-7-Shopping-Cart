//
//  ItemToPurchase.cpp
//  Lab 7
//
//  Created by Westley Holden on 10/1/19.
//

#include <iostream>
#include <string>
using namespace std;

#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase(){
    itemName = "none";
    itemPrice = 0.0;
    itemQuantity = 0;
}
void ItemToPurchase::SetName(string userName){
    itemName = userName;
}
string ItemToPurchase::GetName(){
    return itemName;
}
void ItemToPurchase::SetPrice(double userPrice){
    itemPrice = userPrice;
}
double ItemToPurchase::GetPrice(){
    return itemPrice;
}
void ItemToPurchase::SetQuantity(int userQuantity){
    itemQuantity = userQuantity;
}
int ItemToPurchase::GetQuantity(){
    return itemQuantity;
}
