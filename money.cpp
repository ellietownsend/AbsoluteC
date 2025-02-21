//
//  money.cpp
//  bookCH6
//
//  Created by Ellie Townsend on 2/21/25.
//

#include "money.h"
#include <iostream>
using namespace std;

class Money{
public:
    void getDollars();
    void setDollars(int userDollars);
    void setCents(int cents);
    void getCents();
    void getTotal();
private:
    int dollars;
    int cents;
};

void Money::setDollars(int userDollars){
    dollars = userDollars;
}

void Money::getDollars(){
    cout << "The amount of dollars you have is: $" << dollars << endl;
}

void Money::setCents(int userCents){
    if (userCents < 60){
        cents = userCents;
    }
    else{
        cout << "Please count cents that add up to greater than 60 as a dollar." << endl;
    }
}

void Money::getCents(){
    cout << "The amount of cents you have is: " << cents << endl;
}

void Money::getTotal(){
    double total = static_cast<double>(dollars) + (static_cast<double>(cents)/100);
    cout << "The total amount of money you have is: $" << total << endl;
}

void moneyCounter(){
    Money obj1;
    cout << "Please input the amount of dollars you have: " << endl;
    int dollars;
    cin >> dollars;
    obj1.setDollars(dollars);
    
    cout << "Please input the amount of cents you have: " << endl;
    int cents;
    cin >> cents;
    obj1.setCents(cents);
    
    obj1.getTotal();
    
    Money obj2;
    cout << "Please input the amount of dollars you have: " << endl;
    int dollars2;
    cin >> dollars2;
    obj2.setDollars(dollars2);
    
    cout << "Please input the amount of cents you have: " << endl;
    int cents2;
    cin >> cents2;
    obj2.setCents(cents2);
    
    obj2.getTotal();
}





