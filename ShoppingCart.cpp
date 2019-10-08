#include <iostream>
#include <vector>
#include <string>
#include "ShoppingCart.h"
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
string ShoppingCart::GetName() {
   return custName;
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

}