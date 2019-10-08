#ifndef ShoppingCart_h
#define ShoppingCart_h
#include <vector>
#include <iostream>
#include <string>
using namespace std;

class ShoppingCart {
   public:
      ShoppingCart();
      ShoppingCart(string custName, string date);
      void AddToCart(string custName, string date);
      void RemoveFromCart();
      void UpdateQuantity();
      string GetName();
      string GetDate();
      int GetQuantity();
      double GetTotalCost();
      void PrintCostAndQuantity();
      void PrintDescription();

	private:
      string custName;
      string date;
      vector<string> items;
};

#endif