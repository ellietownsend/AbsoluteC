//
//  time.cpp
//  bookCH1
//
//  Created by Ellie Townsend on 2/3/25.
//

#include "time.h"
#include <iostream>
using namespace std;

void timeCalc(){
    cout << "Please enter a time in seconds that will then be calacuted into hours, minuites, and seconds: " << endl;
    int userSeconds = 0;
    cin >> userSeconds;
    
    int secondsInMin = 60;
    int secondsInHour = 3600;
    int hours = 0;
    int mins = 0;
    int seconds = 0;
    
    while(userSeconds >= secondsInHour){
        hours += 1;
        userSeconds -= secondsInHour;
    }
    while(userSeconds >= secondsInMin){
        mins += 1;
        userSeconds -= secondsInMin;
    }
    seconds = userSeconds;
    cout << "This is equal to " << hours << " hours, " << mins << " minutes and " << seconds << " seconds" << endl;
}
