//
//  month.cpp
//  bookCH7
//
//  Created by Ellie Townsend on 2/24/25.
//

#include "month.h"
#include <iostream>
#include <string>
using namespace std;

const vector<string> MONTHS= {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

class Month{
public:
    Month(char firstLetter, char secondLetter, char thirdLetter);
    Month(int month);
    Month();
    void inputAsInt(); // reads the first months as an int
    void inputAsChar();
    void outputAsInt();
    void outputAsChar();
    Month getNextMonth();
private:
    int month;
};

// each constructor has to be defined
Month::Month(char firstLetter, char secondLetter, char thirdLetter){
    string nameOfMonth;
    nameOfMonth += firstLetter;
    nameOfMonth += secondLetter;
    nameOfMonth += thirdLetter;
    cout << "String given is: " << nameOfMonth << endl;
    for (int i = 0; i < MONTHS.size(); i++){
        if(nameOfMonth == MONTHS[i]){
            month = i+1;
            break;
        }
    }
}

Month::Month(int a)
:month(a){}

Month::Month()
: month(1){
}


void Month::inputAsInt(){
    cout << "Please input the month as an int: " << endl;
    cin >> month;
}

void Month::inputAsChar(){
    cout << "Please input each letter of the month you would like, followed by hitting the return button" << endl;
    char a;
    cin >> a;
    char b;
    cin >> b;
    char c;
    cin >> c;
    *this = Month(a,b,c);
}

void Month::outputAsInt(){
    cout <<"The month, represented as an int, is: " << month << endl;
}

void Month::outputAsChar(){
    cout << "The month represented as a string is: " << MONTHS[month-1] << endl;
}

Month Month::getNextMonth(){
    Month nextmonth(month);
    cout << "The month following " << MONTHS[month-1] << " is " << MONTHS[month] << endl;
    return nextmonth;
}

void testMonth(){
    // No parenthesis, means default is called,
    Month month1;
    // Saying hey, i want to set month1 as an int
    month1.inputAsInt();
    // We would like to see the month we entered as a char
    month1.outputAsChar();
    // Incrementing to next month
    month1.getNextMonth();
    
    //Next test
    Month month2;
    month2.inputAsChar();
    month2.outputAsInt();
}
