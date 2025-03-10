//
//  babylonianAlgorithm.cpp
//  bookCH1
//
//  Created by Ellie Townsend on 2/3/25.
//

#include "babylonianAlgorithm.h"
#include <cmath>
#include <iostream>
using namespace std;

void squareRoot(){
    cout << "Please enter a positive number to compute the square root of: " << endl;
    double n;
    cin >> n;
    
    
    double previousGuess = n/2;
    double currentGuess = 0;
    
    double onePercentCG = currentGuess * 0.01;
    double difference = abs(previousGuess - currentGuess);
                     
    while(difference > onePercentCG){
        double r = n / previousGuess;
        currentGuess = (previousGuess + r) / 2;
        
        difference = abs(currentGuess - previousGuess);
        previousGuess = currentGuess;
    }
    cout << "The square root is: " << previousGuess << endl;
    
}
