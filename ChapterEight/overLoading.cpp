//
//  overLoading.cpp
//  bookCH8
//
//  Created by Ellie Townsend on 3/3/25.
//

#include "overLoading.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

class Money{
public:
    Money();
    Money(double amount);
    Money(int theDollars, int theCents);
    Money(int theDollars);
    double getAmount() const;
    int getDollars() const; // const at the end means that object we call it on will not be altered
    int getCents() const;
    const Money percent(int percentFigure) const;
    
    friend const Money operator +(const Money& amount1, const Money& amount2);
    friend const Money operator -(const Money& amount1, const Money& amount2);
    friend bool operator ==(const Money& amount1, const Money& amount2);
    friend const Money operator -(const Money& amount);
    friend ostream& operator <<(ostream& outputStream, const Money& amount);
    friend istream& operator >>(istream& inputStream, Money& amount);
    friend bool operator <(const Money& amount1, const Money& amount2);
private:
    int dollars, cents;
    int dollarsPart( double amount) const;
    int centsPart( double amount) const;
    int round( double number) const;
};

const Money Money::percent(int percentFigure) const{
    double total = (dollars + (cents/100.0));
    cout << total << endl;
    double myDollars = static_cast<int>(total);
    double myCents = static_cast<int>(total) % 10;
    return Money(myDollars, myCents);
}

bool operator <(const Money& amount1, const Money& amount2){
    // compare the two values, first I want to get the total sum of both
    double totalOfAmount1 = amount1.getAmount();
    double totalOfAmount2 = amount2.getAmount();
    return (totalOfAmount1 < totalOfAmount2);
}

bool operator <=(const Money& amount1, const Money& amount2){
    double totalOfAmount1 = amount1.getAmount();
    double totalOfAmount2 = amount2.getAmount();
    return (totalOfAmount1 <= totalOfAmount2);
}
bool operator >(const Money& amount1, const Money& amount2){
    double totalOfAmount1 = amount1.getAmount();
    double totalOfAmount2 = amount2.getAmount();
    return (totalOfAmount1 > totalOfAmount2);
}
bool operator >=(const Money& amount1, const Money& amount2){
    double totalOfAmount1 = amount1.getAmount();
    double totalOfAmount2 = amount2.getAmount();
    return (totalOfAmount1 >= totalOfAmount2);
}

Money::Money()
:dollars(0), cents(0){}

Money::Money(int theDollars, int theCents)
:dollars(theCents), cents(theCents){}

Money::Money(int theDollars)
: dollars(theDollars){}

double Money::getAmount() const{
    double amount = dollars + (cents/100);
    return amount;
}

int Money::getDollars() const{
    return dollars;
}

int Money::getCents() const{
    return cents;
}

int Money::dollarsPart(double amount)const{
    return static_cast<int>(amount);
}

int Money::centsPart(double amount)const{
    return static_cast<int>(amount);
}

void moneyMain(){
    Money yourAmount, myAmount(10, 9);
    cout << "Enter an amount of money: ";
    cin >> yourAmount;
    cout << "Ten percent of your money is: " << yourAmount.percent(10) << endl;
    cout << "Your amount is " << yourAmount << endl;
    cout << "My amount is " << myAmount << endl;
    if (yourAmount == myAmount){
        cout << "We have the same amounts.\n";
    }
    else{
        cout << "One of us is richer.\n";
    }
    Money ourAmount = yourAmount + myAmount;
    cout << yourAmount << " + " << myAmount << " equals " << ourAmount << endl;
    Money diffAmount = yourAmount - myAmount;
    cout << yourAmount << " - " << myAmount << " equals " << diffAmount << endl;
    
    bool greaterAmount = yourAmount < myAmount;
    if(greaterAmount){
        cout << yourAmount << " is less than " << myAmount << endl;
    }
    else{
        cout << myAmount << " is less than " << yourAmount << endl;
    }
    
    
}

ostream& operator <<(ostream& outputStream, const Money& amount){
    int absDollars = abs(amount.dollars);
    int absCents = abs(amount.cents);
    if(amount.dollars < 0 || amount.cents < 0){
        outputStream << "$-";
    }
    else{
        outputStream << "$";
        outputStream << absDollars;
    }
    if(absCents >= 10){
        outputStream << "." << absCents;
    }
    else {
        outputStream << "." << '0' << absCents;
    }
    return outputStream;
}

istream& operator >>(istream& inputStream, Money& amount){
    char dollarsSign;
    inputStream >> dollarsSign;
    if(dollarsSign != '$'){
        cout << "No dollar sign in Money input.\n";
        exit(1);
    }
    double amountAsDouble;
    inputStream >> amountAsDouble;
    amount.dollars = amount.dollarsPart(amountAsDouble);
    amount.cents = amount.centsPart(amountAsDouble);
    
    return inputStream;
}

bool operator ==(const Money& amount1, const Money& amount2){
    return (amount1.dollars == amount2.dollars && amount1.cents == amount2.cents);
}

const Money operator -(const Money& amount){
    return Money(-amount.dollars, -amount.cents);
}
const Money operator -(const Money& amount1, const Money& amount2){
    int subtractedDollars = amount1.dollars - amount2.dollars;
    int subtractedCents = amount1.cents - amount2.cents;
    if(subtractedDollars < 0){
        subtractedDollars = - subtractedDollars;
    }
    if(subtractedCents < 0){
        subtractedCents = -subtractedCents;
    }
    return Money(subtractedDollars, subtractedCents);
    
}

const Money operator +(const Money& amount1, const Money& amount2){
    int allCents1 = amount1.cents + amount1.dollars*100;
    int allCents2 = amount2.cents + amount2.dollars*100;
    int sumAllCents = allCents1 + allCents2;
    int absAllCents = abs(sumAllCents);
    int finalDollars = absAllCents/100;
    int finalCents = absAllCents%100;
    
    if(sumAllCents < 0){
        finalDollars = -finalDollars;
        finalCents = -finalCents;
    }
    
    return Money(finalDollars, finalCents);
}


