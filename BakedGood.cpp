//
//  BakedGood.cpp
//  Lab 9
//
//  Created by Westley Holden on 11/10/19.
//  Copyright © 2019 Westley Holden. All rights reserved.
//

#include "BakedGood.h"

BakedGood::BakedGood() {

}
BakedGood::BakedGood(string bakedGoodType, string options, int quantity) {
   treatType = bakedGoodType;
   treatOptions = options;
   itemQuantity = quantity;
}
void BakedGood::PrintDescription() {
   cout << treatType << " " << treatOptions << " " << itemQuantity << endl;
}
