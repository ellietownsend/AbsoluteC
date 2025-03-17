//
//  travel.cpp
//  bookCH1
//
//  Created by Ellie Townsend on 2/3/25.
//

#include "travel.h"
#include <iostream>
using namespace std;

void traveled(){
    cout << "Please enter the speed of your airplane in miles per hour: " << endl;
    double mph = 0;
    cin >> mph;
    
    cout << "Please enter the amount of hours spent travelling: " << endl;
    double timeTraveled = 0;
    cin >> timeTraveled;
    
    double distance = mph * timeTraveled;
    
    double mps = (mph / 3600) * 1609.344;
    
    cout << "The distance traveled is: " << distance << " miles.\n" << "The speed in meters per second is: " << mps << endl;
    
}



