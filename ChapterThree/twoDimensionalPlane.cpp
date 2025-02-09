//
//  twoDimensionalPlane.cpp
//  bookCH3
//
//  Created by Ellie Townsend on 2/9/25.
//

#include "twoDimensionalPlane.h"
#include <iostream>
#include <cmath>
using namespace std;

double twoDimensionalPlane(){
    cout << "Please give the distance of the point from the horizontal x-axis: " << endl;
    double point1X;
    cin >> point1X;
    
    cout << "Please give the distance of the point from the vertixal y-axis: " << endl;
    double point1Y;
    cin >> point1Y;
    
    cout << "Please give the distance of the point from the horizontal x-axis: " << endl;
    double point2X;
    cin >> point2X;
    
    cout << "Please give the distance of the point from the vertixal y-axis: " << endl;
    double point2Y;
    cin >> point2Y;
    
    double distance = sqrt(pow((point2X - point1X),2) + pow((point2Y - point1Y),2));
    
    return distance;
}

