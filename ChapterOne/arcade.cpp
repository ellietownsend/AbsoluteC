//
//  arcade.cpp
//  bookCH1
//
//  Created by Ellie Townsend on 2/3/25.
//

#include "arcade.h"
#include <iostream>
using namespace std;

void candyCount(){
    int candyBarCost = 10;
    int gumBallCost = 3;
    
    cout << "Please enter the amount of coupons you have: " << endl;
    int couponCount;
    cin >> couponCount;
    
    int candyBarHas = 0;
    int gumBallHas = 0;
    
    while(couponCount >= candyBarCost){
        couponCount -= candyBarCost;
        candyBarHas += 1;
    }
    
    while(couponCount >= gumBallCost){
        couponCount -= gumBallCost;
        gumBallHas += 1;
    }
    cout << "The number of candybars you have purchased is: " << candyBarHas << "\n The numbr of gumballs you have purchased is: " << gumBallHas << "\n The numer of tickets you have left over is: " << couponCount << endl;
}
