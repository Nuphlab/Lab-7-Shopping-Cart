#include <string>
#include <iostream>
#include <vector>
#include "ShoppingCart.h"
#include "ItemToPurchase.h"
using namespace std;

int main() {
   string userName;
   string userDate;
   string userOption;
   string userChoice;
   string itemName;
   double itemPrice;
   string itemDescription;
   int itemQuantity;
   ShoppingCart person;
   ItemToPurchase list;
   vector<ItemToPurchase> items;

   cout << "Enter Customer's Name:" << endl;
   getline(cin, userName);
   cout << "Enter Today's Date:" << endl;
   getline(cin, userDate);
   cout << endl;
   cout << "Enter option:" << endl;
   cin >> userOption;
   cin.ignore();
   
   while (userOption != "quit") {
      if (userOption != "add" && userOption != "remove" && userOption != "change" && userOption != "descriptions" && userOption != "cart" && userOption != "options" && userOption != "quit") {
         cout << "Menu" << endl;
         cout << "add - Add item to cart" << endl;
         cout << "remove - Remove item from cart" << endl;
         cout << "change - Change item quantity" << endl;
         cout << "descriptions - Output items' descriptions" << endl;
         cout << "cart - Output shopping cart" << endl;
         cout << "options - Print the options menu" << endl;
         cout << "quit - Quit" << endl << endl;
         cout << endl;
      }
      if (userOption == "options") {
         cout << "MENU" << endl;
         cout << "add - Add item to cart" << endl;
         cout << "remove - Remove item from cart" << endl;
         cout << "change - Change item quantity" << endl;
         cout << "descriptions - Output items' descriptions" << endl;
         cout << "cart - Output shopping cart" << endl;
         cout << "options - Print the options menu" << endl;
         cout << "quit - Quit" << endl;
         cout << endl;
         
      }
      if (userOption == "add") {
         cout << "Enter the item name:" << endl;
         getline(cin, itemName);
         cout << "Enter the item description:" << endl;
         getline(cin, itemDescription);
         cout << "Enter the item price:" << endl;
         cin >> itemPrice;
         cin.ignore();
         cout << "Enter the item quantity:" << endl;
         cin >> itemQuantity;
         cin.ignore();

         for (int i = 0; i < 1; ++i) {
            bool copy = false;
            for (int j = 0; j < items.size(); ++j) {
               if (items.at(j).GetName() == itemName) {
                  copy = true;
               }
            }
            if (copy == true) {
               cout << "Item is already in cart. Nothing added." << endl << endl;
            }
            else {
               list.SetName(itemName);
               list.SetDescription(itemDescription);
               list.SetPrice(itemPrice);
               list.SetQuantity(itemQuantity);

               items.push_back(list);
               person.AddToCart(items);
            }
         }
      }
      else if (userOption == "remove") {
         string itemName;
         cout << "Enter name of the item to remove:" << endl;
         getline(cin, itemName);

         for (int i = 0; i < 1; ++i) {
            bool copy = false;
            for (int j = 0; j < items.size(); ++j) {
               if (items.at(j).GetName() == itemName) {
                  copy = true;
                  items.erase(items.begin() + j);
                  person.AddToCart(items);
               }
            }
            if (copy == false) {
               cout << "Item not found in cart. Nothing removed." << endl << endl;
            }
         }
      }
      else if (userOption == "change") {
         string newItem = "";
         int newQuantity = 0;
         cout << "Enter the item name:" << endl;
         getline(cin, newItem);
         cout << "Enter the new quantity:" << endl;
         cin >> newQuantity;
         cin.ignore();

         for (int i = 0; i < 1; ++i) {
            bool copy = false;
            for (int j = 0; j < items.size(); ++j) {
               if (items.at(j).GetName() == newItem) {
                  copy = true;
                  items.at(j).SetQuantity(newQuantity);
                  person.AddToCart(items);
               }
            }
            if (copy == false) {
               cout << "Item not found in cart. Nothing modified." << endl << endl;
            }
         }

      }
      else if (userOption == "descriptions") {
         person.SetName(userName);
         person.SetDate(userDate);
         person.PrintDescription();
      }
      else if (userOption == "cart") {
         person.SetName(userName);
         person.SetDate(userDate);
         if (person.GetQuantity() == 0) {
            person.PrintDescription();
         }
         else {
            person.PrintCostAndQuantity();
         }
      }
      cout << "Enter option:";
      cin >> userOption;
      cin.ignore();
   }

   cout << "Goodbye.";

	return 0;
}