//
//  hourConversion.cpp
//  bookCH4
//
//  Created by Ellie Townsend on 2/11/25.
//

#include "hourConversion.h"
#include <iostream>
#include <string>
using namespace std;

void input(){
    char answer;
    do{
        cout << "Please input the military time you would like to compute, starting with the hour: " << endl;
        int militaryTimeHour;
        cin >> militaryTimeHour;
        
        cout << "Please input the military time you would like to compute, now the minuites: " << endl;
        int militaryTimeMin;
        cin >> militaryTimeMin;
        
        conversion(militaryTimeHour, militaryTimeMin);
        
        
        cout << "Would you like to read in another time? Press \"n\" for no and \"y\" for yes" << endl;
        cin >> answer;
        
    }while(answer != 'q');
}
void conversion(int militaryTimeHour, int militaryTimeMin){
    if(militaryTimeHour < 12){
        cout << militaryTimeHour << ":" << militaryTimeMin << "AM" << endl;
    }
    else if(militaryTimeHour == 12){
        cout << "12:" << militaryTimeMin << "PM" << endl;
    }
    else{
        int strandardTime = militaryTimeHour - 12;
        cout << strandardTime << ":" << militaryTimeMin << "PM" << endl;
    }
}
