#include <string>
#include <iostream>
#include "ShoppingCart.h"
using namespace std;

int main() {
   string userName;
   string userDate;
   string userOption;
   string userChoice;
   string itemName;
   string itemPrice;
   string itemDescription;
   string itemQuantity;
   ShoppingCart item;

   cout << "Enter Customer's Name:" << endl;
   getline(cin, userName);
   cout << "Enter Today's Date:" << endl;
   getline(cin, userDate);
   cout << endl;
   cout << "Enter option:" << endl;
   cin >> userOption;
   cin.ignore();
   
   while (userOption != "add" && userOption != "remove" && userOption != "change" && userOption != "descriptions" && userOption != "cart" && userOption != "options" && userOption != "quit") {
      cout << "add - Add item to cart" << endl;
      cout << "remove - Remove item from cart" << endl;
      cout << "change - Change item quantity" << endl;
      cout << "descriptions - Output items' descriptions" << endl;
      cout << "cart - Output shopping cart" << endl;
      cout << "options - Print the options menu" << endl;
      cout << "quit - Quit" << endl << endl;

      cout << "Enter option:" << endl;
      cin >> userOption;
      cin.ignore();
   }
   if (userOption == "add") {
      cout << "Enter the item name :" << endl;
      cin >> itemName;
      cout << "Enter the item description :" << endl;
      cin >> itemDescription;
      cout << "Enter the item price :" << endl;
      cin >> itemPrice;
      cout << "Enter the item quantity :" << endl;
      cin >> itemQuantity;
   }
   else if (userOption == "remove") {

   }
   else if (userOption == "change") {

   }
   else if (userOption == "descriptions") {

   }
   else if (userOption == "cart") {

   }
   else if (userOption == "options") {
      cout << "Enter option:" << endl;
      cin >> userOption;
      cin.ignore();
      cout << "add - Add item to cart" << endl;
      cout << "remove - Remove item from cart" << endl;
      cout << "change - Change item quantity" << endl;
      cout << "descriptions - Output items' descriptions" << endl;
      cout << "cart - Output shopping cart" << endl;
      cout << "options - Print the options menu" << endl;
      cout << "quit - Quit" << endl;

      cin >> userOption;
      cin.ignore();
   }
   else if (userOption == "quit") {
      cout << "Goodbye.";
   }
	return 0;
}