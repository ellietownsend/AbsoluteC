//
//  weight.cpp
//  bookCH1
//
//  Created by Ellie Townsend on 2/3/25.
//

#include "weight.h"
#include <iostream>
using namespace std;

void idealWeight(){
    // No one will be below 5ft, here I am converting it to inches
    int heightInFeet = 5;
    
    // Starting weight
    int weight = 110;
    
    cout << " Please enter how many feet you are: " << endl;
    int givenHeightInFeet;
    cin >> givenHeightInFeet;
    
    cout << "Please enter the amount of inches from there: " << endl;
    int inches;
    cin >> inches;
    
    // Convert the additional feet that we need to add to inches:
    int additionalHeight = ((givenHeightInFeet - heightInFeet) * 12);
    
    // Add the additional inches given:
    additionalHeight += inches;
    
    // Add the current weight, with 5 pounds, for each inch we have added above
    weight += (additionalHeight * 5);
    cout << "Your ideal weight is: " << weight << endl;
    
}
