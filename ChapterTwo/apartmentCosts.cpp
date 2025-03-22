//
//  apartmentCosts.cpp
//  bookCH2
//
//  Created by Ellie Townsend on 2/4/25.
//

#include "apartmentCosts.h"
#include <iostream>
using namespace std;

void apartmentFloorCost(){
    cout << "Please enter the number of stories in your apartment: " << endl;
    int floors;
    cin >> floors;
    
    cout << "Please enter the base price of apartments on the first floor: " << endl;
    double basePrice;
    cin >> basePrice;
    
    cout << "Please enter the cost of amenities as a decimal number: " << endl;
    double amenitiesCost;
    cin >> amenitiesCost;
    
    cout << "Please enter the cost of taxes as a decimal number" << endl;
    double taxesCost;
    cin >> taxesCost;
    
    for(int i = 1; i <= floors; i++){
        double amenities = (basePrice * amenitiesCost);
        double taxes = ((basePrice + amenities) * taxesCost);
        double sum = basePrice + amenities + taxes;
        cout << "The base price of floor " << i << " is " << basePrice << ". The charge of amenities is " << amenities << ". The charge of taxes is " << taxes << ". The sum of the aparments on this floor is " << sum << "." << endl;
        basePrice += (basePrice * 0.02);
    }
    cout << endl;
}
