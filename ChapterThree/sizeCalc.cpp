//
//  sizeCalc.cpp
//  bookCH3
//
//  Created by Ellie Townsend on 2/8/25.
//

#include "sizeCalc.h"
#include <iostream>
using namespace std;

void prompts(){
    cout << "Please enter your height in feet: " << endl;
    double height;
    cin >> height;
    
    cout << "Please enter your weight: " << endl;
    double weight;
    cin >> weight;
    
    cout << "Please enter your age: " << endl;
    double age;
    cin >> age;
    
    cout << "Your jacket size is: " << jacketSize(height, weight, age) << endl;
    cout << "Your waist size is: " << waistSize(weight,age) << endl;
    cout << "Your hat size is: " << hatSize(weight,height) << endl;
    
}
double hatSize(double weight, double height){
    double hatSize = (weight / height) * 2.9;
    return hatSize;
}

double jacketSize(double height, double weight, int age){
    double additionalInches = 0;
    if (age > 30){
        additionalInches = additionalInchesChest(age);
    }
    double jacketSize = ((height * weight) / 288) + additionalInches;
    return jacketSize;
}

double additionalInchesChest(int age){
    double additionalInchesChest = 0;
    do{
        if (age % 10 == 0){
            additionalInchesChest += (1.0/8);
        }
        age--;
    }
    while(age>40);
    return additionalInchesChest;
}

double waistSize(double weight, double age){
    double additionalInches = 0;
    if(age > 28){
        additionalInches = additionalInchesWaist(age);
    }
    double waist = (weight / 5.7) + additionalInches;
    return waist;
}

double additionalInchesWaist(double age){
    double additionalInches = 0;
    while(age >= 30){
        additionalInches += (1/10);
        age -= 2;
    }
    return additionalInches;
}
