#include <iostream>
#include <vector>
#include <string>
#include "ShoppingCart.h"
#include "ItemToPurchase.h"
using namespace std;

ShoppingCart::ShoppingCart() {
}

ShoppingCart::ShoppingCart(string custName, string date) {
   custName = "none";
   date = "January 1, 2016";

   this->custName = custName;
   this->date = date;
}
void ShoppingCart::AddToCart(vector<ItemToPurchase> items) {
   this->items = items;
}
void ShoppingCart::RemoveFromCart() {

}
void ShoppingCart::UpdateQuantity() {

}
void ShoppingCart::SetName(string custName) {
   this->custName = custName;
}
string ShoppingCart::GetName() {
   return custName;
}
void ShoppingCart::SetDate(string date) {
   this->date = date;
}
string ShoppingCart::GetDate() {
   return date;
}
int ShoppingCart::GetQuantity() {
   return items.size();
}
double ShoppingCart::GetTotalCost() {
   return 0;
}
void ShoppingCart::PrintCostAndQuantity() {
   cout << custName << "'s Shopping Cart - " << date << endl;
   cout << "Number of items: " << items.size() << endl;
}
void ShoppingCart::SetQuantity(int size) {

}
void ShoppingCart::PrintDescription() {
   /*Mary Jane Lewis's Shopping Cart - September 1, 2017
   Shopping cart is empty.*/
   ItemToPurchase list;
   cout << custName << "'s Shopping Cart - " << date << endl;

   if (GetQuantity() == 0) {
      cout << "Shopping cart is empty." << endl << endl;
   }
   else {
      cout << "Item Descriptions" << endl;
      for (int i = 0; i < items.size(); ++i) {
         cout << items.at(i).GetName() << ": ";
         cout << items.at(i).GetDescription() << endl;
      }
   }
}
