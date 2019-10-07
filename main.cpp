#include <string>
#include <iostream>
#include "ShoppingCart.h"
using namespace std;

int main() {
   string userName;
   string userDate;
   string userOption;

   cout << "Enter Customer's Name:" << endl;
   getline(cin, userName);
   cout << "Enter Today's Date:" << endl;
   getline(cin, userDate);
   cout << endl;
   cout << "Enter option:" << endl;
   cin >> userOption;
   cin.ignore();
   
   if (userOption == "add" || userOption == "add" || userOption == "add" || userOption == "add" || userOption == "add" || userOption == "add" || userOption == "add" || ) {
   }
   else {
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
   }
	return 0;
}
