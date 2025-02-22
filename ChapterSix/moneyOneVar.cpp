//
//  moneyOneVar.cpp
//  bookCH6
//
//  Created by Ellie Townsend on 2/21/25.
//

#include "moneyOneVar.h"
#include <iostream>
using namespace std;

class MoneyOneVar{
public:
    void getDollars();
    void setDollars(int userDollars);
    void setCents(int cents);
    void getCents();
    void getTotal();
private:
    double value;
};

void MoneyOneVar::setDollars(int userDollars){
    value = userDollars + (value - static_cast<int>(value));
}

void MoneyOneVar::getDollars(){
    cout << "The amount of dollars you have is: $" << static_cast<int>(value) << endl;
}

void MoneyOneVar::setCents(int userCents){
    if (userCents < 60){
        value += (userCents/100.0);
    }
    else{
        cout << "Please count cents that add up to greater than 60 as a dollar." << endl;
    }
}

void MoneyOneVar::getCents(){
    double cents = value - static_cast<int>(value);
    cout << "The amount of cents you have is: " << cents << endl;
}

void MoneyOneVar::getTotal(){
    cout << "The total amount of money you have is: $" << value << endl;
}

void moneyOneVarCounter(){
    MoneyOneVar obj1;
    cout << "Please input the amount of dollars you have: " << endl;
    int dollars;
    cin >> dollars;
    obj1.setDollars(dollars);
    
    cout << "Please input the amount of cents you have: " << endl;
    int cents;
    cin >> cents;
    obj1.setCents(cents);
    
    obj1.getTotal();
    obj1.getCents();
    
    cout << "Now we are going to check to make sure we can change the value of dollars alone, please enter a new value" << endl;
    int dollars2;
    cin >> dollars2;
    obj1.setDollars(dollars2);
    
    obj1.getTotal();
}
