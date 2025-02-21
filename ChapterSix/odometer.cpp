//
//  odometer.cpp
//  bookCH6
//
//  Created by Ellie Townsend on 2/21/25.
//

#include "odometer.h"
#include <iostream>
using namespace std;

class Odometer{
public:
    bool resetOdometer();
    void setFuelEfficency(int fuel);
    void addMiles(int mile);
    void getGallons();
    
private:
    int miles;
    int fuelEfficency;
};

bool Odometer::resetOdometer(){
    miles = 0;
    return true;
}

void Odometer::setFuelEfficency(int fuel){
    fuelEfficency = fuel;
}

void Odometer::addMiles(int mile){
    miles += mile;
}

void Odometer::getGallons(){
    float gallons = static_cast<float>(miles) / fuelEfficency;
    cout << "The number of gallons that the vehcile has consumed is: " << gallons << endl;
}

void odometerMain(){
    Odometer odometerOne;
    char answer;
    do{
        odometerOne.resetOdometer();
        cout << "Please input the fuel your car uses per gallon:" << endl;
        int fuel;
        cin >> fuel;
        odometerOne.setFuelEfficency(fuel);
        
        cout << "Please input the miles you have traveled in the car: " << endl;
        int miles;
        cin >> miles;
        odometerOne.addMiles(miles);
        
        odometerOne.getGallons();
        cout << "Would you like to try a new fuel number? Please input \"y\" if so" << endl;
        cin >> answer;
        
    }while(answer == 'y');
}

