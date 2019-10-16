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
#include <vector>
using namespace std;

class ItemToPurchase {
public:
   void SetName(string userName);
   string GetName();
   void SetPrice(double userPrice);
   double GetPrice();
   void SetQuantity(int userQuantity);
   int GetQuantity();
   ItemToPurchase();
   ItemToPurchase(string itemName, string itemDescription, double itemPrice, int itemQuantity);
   void SetDescription(string itemDescription);
   string GetDescription();
   void PrintCostAndInfo();
   void PrintNameAndDescription();

private:
   string itemName;
   double itemPrice;
   int itemQuantity;
   string itemDescription;
   vector<ItemToPurchase> items;
};
#endif /* ItemToPurchase_hpp */