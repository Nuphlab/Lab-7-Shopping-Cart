//
//  main.cpp
//  Lab 7
//
//  Created by Westley Holden on 9/29/19.
//  Copyright © 2019 Westley Holden. All rights reserved.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#include "ItemToPurchase.h"

int main() {
    string userIn;
    double userPrice;
    int userQuantity;
    ItemToPurchase obj1;
    ItemToPurchase obj2;
    double total;
    
    cout << "Item" << 1 << endl;
    cout << "Enter the item name:" << endl;
    getline(cin, userIn);
    cout << "Enter the item price:" << endl;
    cin >> userPrice;
    cin.ignore();
    cout << "Enter the item quantity:" << endl;
    cin >> userQuantity;
    cin.ignore();
    obj1.SetName(userIn);
    obj1.SetPrice(userPrice);
    obj1.SetQuantity(userQuantity);
    
    cout << "Item" << 2 << endl;
    cout << "Enter the item name:" << endl;
    getline(cin, userIn);
    cout << "Enter the item price:" << endl;
    cin >> userPrice;
    cin.ignore();
    cout << "Enter the item quantity:" << endl;
    cin >> userQuantity;
    cin.ignore();
    obj2.SetName(userIn);
    obj2.SetPrice(userPrice);
    obj2.SetQuantity(userQuantity);
    
    cout << "TOTAL COST" << endl;
    cout << obj1.GetName() << fixed << setprecision(2) << obj1.GetQuantity() << " @ $" << obj1.GetPrice() << " = $" << obj1.GetQuantity() * obj1.GetPrice() << endl;
    cout << obj2.GetName() << fixed << setprecision(2) << obj2.GetQuantity() << " @ $" << obj2.GetPrice() << " = $" << obj2.GetQuantity() * obj2.GetPrice() << endl;
    total = (obj1.GetQuantity() * obj1.GetPrice()) + (obj2.GetQuantity() * obj2.GetPrice());
    cout << endl;
    cout << "Total: $" << fixed << setprecision(2) << total << endl;
        
    return 0;
}
