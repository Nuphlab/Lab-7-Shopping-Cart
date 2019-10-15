#ifndef ShoppingCart_h
#define ShoppingCart_h
#include <vector>
#include <iostream>
#include <string>
#include "ItemToPurchase.h"
using namespace std;

class ShoppingCart {
   public:
      ShoppingCart();
      ShoppingCart(string custName, string date);
      void AddToCart(vector<ItemToPurchase> items);
      void RemoveFromCart();
      void UpdateQuantity();
      void SetName(string custName);
      string GetName();
      void SetDate(string Date);
      string GetDate();
      void SetQuantity(int size);
      int GetQuantity();
      double GetTotalCost();
      void PrintCostAndQuantity();
      void PrintDescription();
      string itemName;
      string itemDescription;
      double itemPrice;
      int itemQuantity;

	private:
      string custName;
      string date;
      vector<ItemToPurchase> items;
};

#endif