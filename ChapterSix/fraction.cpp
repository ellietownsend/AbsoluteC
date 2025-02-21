//
//  fraction.cpp
//  bookCH6
//
//  Created by Ellie Townsend on 2/20/25.
//

#include "fraction.h"
#include <iostream>
using namespace std;



class Fraction{
public:
    void setNumerator(int numerator);
    void setDenominator(int denominator);
    void reduceFraction();
private:
    int numerator;
    int denominator;
};

void Fraction::setNumerator(int getNumerator){
    numerator = getNumerator;
}

void Fraction::setDenominator(int getDenominator){
    denominator = getDenominator;
}

void Fraction::reduceFraction(){
    int gcd = 1;
    if(numerator > denominator){
        for (int i = 1; i < numerator; i++){
            if(numerator % i == 0 && denominator % i == 0){
                gcd = i;
            }
        }
    }
    else{
        for (int i = 1; i < denominator; i++){
            if(numerator % i == 0 && denominator % i == 0){
                gcd = i;
            }
        }
    }
    cout << "The reduced fraction is equal to: " << ((double)numerator/gcd) << "/" << ((double)denominator/gcd) << endl;
}

void fractionMain(){
    Fraction fraction1;
    cout << "Please provide a numerator:" << endl;
    int numerator;
    cin >> numerator;
    
    cout << "Please provide a denominator: " << endl;
    int denominator;
    cin >> denominator;
    
    fraction1.setNumerator(numerator);
    fraction1.setDenominator(denominator);
    
    fraction1.reduceFraction();
    
}
