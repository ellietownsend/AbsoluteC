//
//  twoConversions.cpp
//  bookCH4
//
//  Created by Ellie Townsend on 2/12/25.
//

#include "twoConversions.h"
#include <iostream>
using namespace std;

const double METERSINFEET = 0.3048;
const double CM_IN_FEET = 30.48;
const double CM_IN_INCH = 2.54;


void inputForBoth(){
    cout << "If you would like to convert from feet/inches to meters/centimeters press \"1\" "  << endl;
    cout << "If you would like to convert from meters/centimeters to feet/inches press \"2\" "  << endl;
    int answer;
    cin >> answer;
    
    if(answer == 1){
        cout << "Please input a number in feet to convert to meters/centimeters " << endl;
        double feet;
        cin >> feet;
        cout << "Please input a number in inches to convert to meters/centimeters " << endl;
        double inches;
        cin >> inches;
        calculationFeetToMeters(feet,inches);
    }
    else{
        cout << "Please input a number in meters to convert to feet/inches " << endl;
        double meters;
        cin >> meters;
        cout << "Please input a number in centimeters to convert to feet/inches " << endl;
        double centimeters;
        cin >> centimeters;
        calculationFeetToMeters(meters,centimeters);
    }
    
}


// Meters to feet caluclatuion:

void calculationMetersToFeet(double meters, double centimeters){
    double centimetersTotal = (meters * 100) + centimeters;
    int feet = ((int)centimetersTotal / CM_IN_FEET);
    // We have to find out the leftover
    double leftover = centimetersTotal - (feet * CM_IN_FEET);
    // Turn those left overs into inches
    int inches = (int)leftover / CM_IN_INCH;
    outputMetersToFeet(feet, inches);
}

void outputMetersToFeet(double feet,double inches){
    cout << "The amount of feet is " << feet << endl << "The amount of inches is " << inches << endl;
}


// Feet to meters caluclatuion:

void calculationFeetToMeters(double feet, double inches){
    // get the total number of inches the user entered
    double totalInches = (feet * 12) + inches;
    // calcuting the amount of meters in an inch, and multiplying that by the number of inches we have
    double totalMeters = (METERSINFEET * totalInches) / 12;
    // getting the remainder of the last caluction that could not quite fit in a meter
    int meters = (int)(totalMeters);
    // turning those left over meters into centimeters
    double remainingMeters = totalMeters - meters;
    double centimeters = remainingMeters * 100;
    outputFeetToMeters(meters, centimeters);
}

void outputFeetToMeters(int inchesToMeters,double metersToCentimeters){
    cout << "The amount of meters is " << inchesToMeters << endl << "The amount of centimeters is " << metersToCentimeters << endl;
}
