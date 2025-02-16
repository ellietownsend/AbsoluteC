//
//  rainFall.cpp
//  bookCH5
//
//  Created by Ellie Townsend on 2/16/25.
//

#include "rainFall.h"
#include <iostream>
using namespace std;

const int NUMOFMONTHS = 12;
const string MONTHS[12] = {"January", "Feburary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

void rainFallMain(){
    int averageRainFall[NUMOFMONTHS];
    int actualRainFall[NUMOFMONTHS];
    
    getAverageMonthly(averageRainFall);
    getActualRainFall(actualRainFall);
    display(averageRainFall, actualRainFall);
    
}
void getAverageMonthly(int a[]){
    cout << "We will first need the information for the average monthly rainfall." << endl;
    for(int i = 0; i < NUMOFMONTHS; i++){
        cout << "Please enter the average rainfall for: " << MONTHS[i] << endl;
        int averageRainFall;
        cin >> averageRainFall;
        a[i] = averageRainFall;
        //cout << "The average rainfall of " << a[i] << " has been added to the array at position " << i << endl;
    }
}

void getActualRainFall(int a[]){
    cout << "We will now need to obtain the actual monthly rainfall. What month (in a number, ex: Januray = 1) are you currently using this program? " << endl;
    int month;
    cin >> month;
    for(int i = month; i <= NUMOFMONTHS; i++){
        cout << "What was the average rainfall of: " << MONTHS[i-1] << endl;
        int actualrainFall;
        cin >> actualrainFall;
        a[i] = actualrainFall;
        //cout <<"The actual rainfall of " << a[i] << " has been added to the array in the month of " << MONTHS[i-1] << endl;
        }
    
    for(int i = 0; i < (month-1); i++){
        cout << "What was the average rainfall of: " << MONTHS[i] << endl;
        int actualrainFall;
        cin >> actualrainFall;
        a[i] = actualrainFall;
        //cout <<"The actual rainfall of " << a[i] << " has been added to the array in the month of " << MONTHS[i] << endl;
    }
}

void display(int a[], int b[]){
    for(int i = 0; i < NUMOFMONTHS; i++){
        cout << "The average Rainfall of " << MONTHS[i] << " is " << a[i] << endl;
        cout << "The actual Rainfall of " << MONTHS[i] << " was " << b[i] << endl;
    }
    
}
    



