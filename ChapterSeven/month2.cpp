//
//  month2.cpp
//  bookCH7
//
//  Created by Ellie Townsend on 2/25/25.
//

#include "month2.h"
#include <iostream>
using namespace std;

const vector<string> MONTHS= {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

class Month2{
public:
    Month2(char input1, char input2, char input3);
    Month2(int num);
    Month2();
    void readMonthAsInt();
    void readMonthAsChar();
    void outputMonthAsInt();
    void outputMonthAsChar();
    Month2 outputNextMonthAsMonth();
private:
    char letterOne;
    char letterTwo;
    char letterThree;
}; // have to put colin so compiler knows were done

//Need to create a definition for each constructor

Month2::Month2(char input1, char input2, char input3)
: letterOne(input1), letterTwo(input2), letterThree(input3)
{
}

Month2::Month2(int num){
    string temp;
    if(num > 0 && num <= 12){
        temp = MONTHS[num-1];
    }
    else{
        cout << "Number provided is not in calender range" << endl;
    }
    letterOne = temp[0];
    letterTwo = temp[1];
    letterThree = temp[2];
}

Month2::Month2()
: letterOne('J'), letterTwo('a'), letterThree('n')
{}

void Month2::readMonthAsInt(){
    cout << "Please enter a number that represents the month you would like to select: " << endl;
    int month;
    cin >> month;
    // Modifying that same object
    *this = Month2(month);
}

void Month2::readMonthAsChar(){
    cout << "Please enter the month by entering the first three characters of it: " << endl;
    char a;
    char b;
    char c;
    cin >> a >> b >> c;
    *this = Month2(a, b, c);
}

void Month2::outputMonthAsInt(){
    string temp = "";
    temp += letterOne;
    temp += letterTwo;
    temp += letterThree;
    for(int i = 1; i <= MONTHS.size(); i++){
        if(temp == MONTHS[i-1]){
            cout << "Your month represented as a number is: " << i << endl;
        }
    }
}

void Month2::outputMonthAsChar(){
    cout << "Your month represented as a char is: " << letterOne << letterTwo << letterThree << endl;
}

Month2 Month2::outputNextMonthAsMonth(){
    Month2 nextMonth;
    int userMonth = 0;
    string temp;
    temp += letterOne;
    temp += letterTwo;
    temp += letterThree;
    for(int i = 1; i <= MONTHS.size(); i++){
        if(temp == MONTHS[i]){
            userMonth = i;
        }
    }
    nextMonth = Month2(userMonth);
    return nextMonth;
}

void testMonth2(){
    Month2 myMonth1;
    myMonth1.readMonthAsInt();
    myMonth1.outputMonthAsChar();
    
    cout << endl;
    
    Month2 myMonth2(3);
    myMonth2.outputMonthAsChar();
    
    
    Month2 myMonth4('N', 'o', 'v');
    myMonth4.outputMonthAsInt();
    
    Month2 myMonth5;
    myMonth5.outputMonthAsChar();
    
}
