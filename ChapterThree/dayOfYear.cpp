//
//  dayOfYear.cpp
//  bookCH3
//
//  Created by Ellie Townsend on 2/10/25.
//

#include "dayOfYear.h"
#include <iostream>
using namespace std;

bool isleapYear(int year){
    return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}

int getCenturyValue(int year){
    int firstTwoDigits = (year / 100);
    // getting the first two digits
    int remainder = (firstTwoDigits % 4);
    return ((3 - remainder) * 2);
}

int getYearValue(int year){
    int lastTwoDigits = (year % 100);
    int leapYearFactor = (lastTwoDigits / 4);
    return (lastTwoDigits + leapYearFactor);
}

int getMonthValue(int month, int year){
    /*enum class Months {January, February, March, April, May, June, July, August, September, October, November, December};*/
    switch(month){
        case 1:
            if(isleapYear(year)){
                return 6;
            }
            return 0;
        case 2:
            if(isleapYear(year)){
                return 2;
            }
            return 3;
        case 3:
            return 3;
        case 4:
            return 6;
        case 5:
            return 1;
        case 6:
            return 4;
        case 7:
            return 6;
        case 8:
            return 2;
        case 9:
            return 5;
        case 10:
            return 0;
        case 11:
            return 3;
        case 12:
            return 5;
    }
    return -1;
}

void findDay(){
    cout << "Welcome! In this program we will find the day of the date you input. " << endl;
    cout << "Please enter the month, as a number: " << endl;
    int month;
    cin >> month;
    cout << "Please enter the year: " << endl;
    int year;
    cin >> year;
    cout << "Please enter the day: " << endl;
    int day;
    cin >> day;
    
    int remainder = ((day + getMonthValue(month, year) + getYearValue(year) + getCenturyValue(year)) % 7);
    
    switch(remainder){
        case 0:
            cout << "The day corresponds to Sunday" << endl;
            break;
        case 1:
            cout << "The day corresponds to Monday" << endl;
            break;
        case 2:
            cout << "The day corresponds to Tuesday" << endl;
            break;
        case 3:
            cout << "The day corresponds to Wednesday" << endl;
            break;
        case 4:
            cout << "The day corresponds to Thursday" << endl;
            break;
        case 5:
            cout << "The day corresponds to Friday" << endl;
            break;
        case 6:
            cout << "The day corresponds to Saturday" << endl;
            break;
    }
}
