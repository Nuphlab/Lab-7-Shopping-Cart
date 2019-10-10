//
//  ItemToPurchase.hpp
//  Lab 7
//
//  Created by Westley Holden on 10/1/19.
//

#ifndef ItemToPurchase_h
#define ItemToPurchase_h

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
   string SetDescription(string itemDescription);
   void GetDescription();
   void PrintCostAndInfo();
   void PrintNameAndDescription();

private:
   string itemName;
   double itemPrice;
   int itemQuantity;
   string itemDescription;
};
#endif /* ItemToPurchase_hpp */