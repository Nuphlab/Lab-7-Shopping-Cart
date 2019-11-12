//
//  Bread.cpp
//  Lab 9
//
//  Created by Westley Holden on 11/10/19.
//  Copyright © 2019 Westley Holden. All rights reserved.
//

#include "Bread.h"
Bread::Bread() {

}
Bread::Bread(string bakedGoodType, string options, int quantity) {
   breadType = bakedGoodType;
   treatOptions = options;
   itemQuantity = quantity;
}
string Bread::ToString() {
   //Returns a string containing the basic description and base price of the object.
   return basePriceDescription;
}
double Bread::DiscountedPrice(int totalGoods) {
   /*Takes as parameter the total number of a particular baked good and returns the discounted total price for that baked good.*/
   return totalDiscountedPrice;
}