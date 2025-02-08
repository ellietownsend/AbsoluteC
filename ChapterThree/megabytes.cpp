//
//  megabytes.cpp
//  bookCH3
//
//  Created by Ellie Townsend on 2/7/25.
//

#include "megabytes.h"
#include <iostream>
using namespace std;

// globally defined kilobits
const double KILOBITS = 8000;

void kiloToMega(){
    cout << "Please input the number of kilobits per second: " << endl;
    double kilosPerSecond;
    cin >> kilosPerSecond;
    
    cout << "Please input the number of minitues your video is: " << endl;
    double minuites;
    cin >> minuites;
    
    double secondsInVideo = minuites * 60;
    double kilosPerVideo = kilosPerSecond * secondsInVideo;
    
    cout << "The number of megabytes in this video is: " << (kilosPerVideo / KILOBITS) << endl;
}
