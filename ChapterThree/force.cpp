//
//  force.cpp
//  bookCH3
//
//  Created by Ellie Townsend on 2/8/25.
//

#include "force.h"
#include <iostream>
#include <cmath>
using namespace std;

const double GRAVITY = (6.673 * (pow(10,-8)));

void force(double m1, double m2, double distance){
        double force = (GRAVITY * m1 * m2) / pow(distance, 2);
    cout << "The force of the two objects is equal to " << force << " dynes." << endl;
    
}
