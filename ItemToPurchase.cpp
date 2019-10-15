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
#include "ShoppingCart.h"

ItemToPurchase::ItemToPurchase() {
   itemName = "none";
   itemPrice = 0.0;
   itemQuantity = 0;
}
ItemToPurchase::ItemToPurchase(string& itemName, string& itemDescription, double& itemPrice, int& itemQuantity) {
   itemName = "none";
   itemDescription = "none";
   itemPrice = 0.0;
   itemQuantity = 0;

   this->itemName = itemName;
   this->itemPrice = itemPrice;
   this->itemQuantity = itemQuantity;
   this->itemDescription = itemDescription;
}
void ItemToPurchase::SetDescription(string itemDescription) {
   this->itemDescription = itemDescription;
}
string ItemToPurchase::GetDescription() {
   return itemDescription;
}
void ItemToPurchase::PrintCostAndInfo() {
   cout << itemName << " " << itemQuantity << " " << "@ " << itemPrice << " = " << itemPrice * itemQuantity << endl;
}
void ItemToPurchase::PrintNameAndDescription() {
   cout << itemName << ": " << itemDescription << endl;
}
void ItemToPurchase::SetName(string userName) {
   itemName = userName;
}
string ItemToPurchase::GetName() {
   return itemName;
}
void ItemToPurchase::SetPrice(double userPrice) {
   itemPrice = userPrice;
}
double ItemToPurchase::GetPrice() {
   return itemPrice;
}
void ItemToPurchase::SetQuantity(int userQuantity) {
   itemQuantity = userQuantity;
}
int ItemToPurchase::GetQuantity() {
   return itemQuantity;
}