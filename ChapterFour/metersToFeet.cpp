//
//  metersToFeet.cpp
//  bookCH4
//
//  Created by Ellie Townsend on 2/11/25.
//

#include "metersToFeet.h"
#include <iostream>
using namespace std;

const double CM_IN_FEET = 30.48;
const double CM_IN_INCH = 2.54;


void inputForMetersToFeet(){
    cout << "Please input a number in meters to convert into feet and inches: " << endl;
    double meters;
    cin >> meters;
    
    cout << "Please input a number in centimeters to convert into feet and inches: " << endl;
    double centimeters;
    cin >> centimeters;
    
    calculation(meters, centimeters);
    
}
void calculation(double meters, double centimeters){
    double centimetersTotal = (meters * 100) + centimeters;
    int feet = ((int)centimetersTotal / CM_IN_FEET);
    // We have to find out the leftover
    double leftover = centimetersTotal - (feet * CM_IN_FEET);
    // Turn those left overs into inches
    int inches = (int)leftover / CM_IN_INCH;
    output(feet, inches);
}
void output(double feet,double inches){
    cout << "The amount of feet is " << feet << endl << "The amount of inches is " << inches << endl;
}


