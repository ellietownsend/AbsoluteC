//
//  feetToMeters.cpp
//  bookCH4
//
//  Created by Ellie Townsend on 2/11/25.
//

#include "feetToMeters.h"
#include <iostream>
using namespace std;

const double METERSINFEET = 0.3048;

void inputForFeetToMeters(){
    cout << "Please input a number in feet to convert into inches: " << endl;
    double feet;
    cin >> feet;
    
    cout << "Please input a number in inches to convert into feet: " << endl;
    double inches;
    cin >> inches;
    
    calculation(feet, inches);
    
}

void calculation(double feet, double inches){
    // get the total number of inches the user entered
    double totalInches = (feet * 12) + inches;
    // calcuting the amount of meters in an inch, and multiplying that by the number of inches we have
    double totalMeters = (METERSINFEET * totalInches) / 12;
    // getting the remainder of the last caluction that could not quite fit in a meter
    int meters = (int)(totalMeters);
    // turning those left over meters into centimeters
    double remainingMeters = totalMeters - meters;
    double centimeters = remainingMeters * 100;
    output(meters, centimeters);
}

void output(int inchesToMeters,double metersToCentimeters){
    cout << "The amount of meters is " << inchesToMeters << endl << "The amount of centimeters is " << metersToCentimeters << endl;
}
