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
void ShoppingCart::AddToCart(string custName, string date) {

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

}
void ShoppingCart::PrintDescription() {
   /*Mary Jane Lewis's Shopping Cart - September 1, 2017
   Shopping cart is empty.*/
   cout << custName << "'s Shopping Cart - " << date << endl;
   if (GetQuantity() == 0) {
      cout << "Shopping cart is empty." << endl << endl;
   }
   else {
      cout << "Item Descriptions" << endl;
   }
}