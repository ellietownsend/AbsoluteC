//
//  rationalNumbers.cpp
//  bookCH8
//
//  Created by Ellie Townsend on 3/5/25.
//

#include "rationalNumbers.h"
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class RationalNumber{
public:
    RationalNumber(int numerator, int denominator);
    RationalNumber(int wholeNumber);
    RationalNumber();
    
    friend ostream& operator <<(ostream& outputStream, const RationalNumber& num);
    friend istream& operator >>(istream& inputStream, RationalNumber& num);
    friend bool operator ==(const RationalNumber& num1, const RationalNumber& num2);
    friend bool operator >(const RationalNumber& num1, const RationalNumber& num2);

private:
    int numerator;
    int denominator;
};
bool operator >(const RationalNumber& num1, const RationalNumber& num2){
    cout << (double(num1.numerator) / num1.denominator) << " " << (double(num2.numerator) / num2.denominator) << endl;
    return ((double(num1.numerator) / num1.denominator) > (double(num2.numerator) / num2.denominator));
}


bool operator ==(const RationalNumber& num1, const RationalNumber& num2){
    int multipliedOne = num1.numerator * num2.denominator;
    int multipliedTwo = num2.numerator * num1.denominator;
    return (multipliedOne = multipliedTwo);
}

RationalNumber::RationalNumber(int num, int den)
:numerator(num), denominator(den){}

RationalNumber::RationalNumber(int wholeNumber)
:numerator(wholeNumber), denominator(1){}

RationalNumber::RationalNumber()
:numerator(0), denominator(1){}

ostream& operator <<(ostream& outputStream, const RationalNumber& num){
    outputStream << num.numerator << "/" << num.denominator << endl;
    return outputStream;
}

istream& operator >>(istream& inputStream, RationalNumber& num){
    // Three cases for input:
    // Case 1: they enter two numbers
    
    string input;
    string userNumerator;
    string userDenominator;
    inputStream >> input;
    for(int i = 0; i < input.length(); i++){
        if(input[i] != '/'){
            userNumerator += input[i];
        }
        else{
            for(int j = i+1; j < input.length(); j++){
                userDenominator += input[j];
                i++;
            }
        }
    }
    num.numerator = stoi(userNumerator);
    if(userDenominator == ""){
        num.denominator = 1;
    }
    else{
        num.denominator = stoi(userDenominator);
    }
    return inputStream;
}

void rationalNumberMain(){
    RationalNumber myNum1, myNum2;
    cout << "Enter a rational number in the following format: NUM/NUM" << endl;
    cin >> myNum1;
    cout << "Your first rational number is: " << myNum1;
    cout << "Enter a second rational number to compare to the first: " << endl;
    cin >> myNum2;
    
    cout << "\nChecking if your numbers are equal" << endl;
    if(myNum1 == myNum2){
        cout << "The two numbers you entered are equal!" << endl;
    }
    else{
        cout << "The two numbers you entered are not equal." << endl;
    }
    
    cout << "\nChecking which number is bigger:" << endl;
    if(myNum1 > myNum2){
        cout << "The first number is bigger." << endl;
    }
    else{
        cout << "The second number is bigger." << endl;
    }
    
    
    
    
    
}
