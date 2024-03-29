//
//  Bread.hpp
//  Lab 9
//
//  Created by Westley Holden on 11/10/19.
//  Copyright © 2019 Westley Holden. All rights reserved.
//

#ifndef Bread_h
#define Bread_h

#include "BakedGood.h"
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Bread : public BakedGood {
public:
   Bread();
   Bread(string bakedGoodType, string options, int quantity);
   virtual string ToString();
   virtual double DiscountedPrice(int totalGoods);
protected:
   string breadType;
   string treatOptions;
   int itemQuantity;
};
#endif /* Bread_hpp */