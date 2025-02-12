//
//  areaOfCircle.cpp
//  bookCH4
//
//  Created by Ellie Townsend on 2/11/25.
//

#include "areaOfCircle.h"
#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;

void radiusOfACircle(int radius, double& area, double& circumference){
    area = PI * pow(radius , 2);
    int diameter = radius * 2;
    circumference = PI * diameter;
    cout << "The area of the circle is: " << area << endl << "The circumference of the circle is " << circumference << endl;
}
