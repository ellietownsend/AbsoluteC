//
//  NinetyNineBottles.cpp
//  bookCH3
//
//  Created by Ellie Townsend on 2/9/25.
//

#include "NinetyNineBottles.h"
#include <iostream>
using namespace std;

void stanzas(){
    for (int i = 99; i >= 0; i--){
        int firstDigit = (i / 10);
        int lastDigit = (i % 10);
        
        if(i <= 19 && i >= 11){
            numbersToEnglish11(i);
        }
        else if(i == 10){
            cout << "Ten bottle of beer on the wall," << endl;
            continue;
        }
        else{
            numberToEnglish(lastDigit,firstDigit);
        }
        
        
        if(i == 1){
            cout << "bottle of beer on the wall," << endl;
            cout << "Take one down, pass it around," << endl;
        }
        else if(i == 0){
            cout << "Zero bottles of beer on the wall." << endl;
        }
        else{
            cout << "bottles of beer on the wall," << endl;
        }
    }
    
}
void numberToEnglish(int ones, int tens = 0){
    switch(tens){
    case 2:
            cout << "Twenty-";
            break;
    case 3:
            cout << "Thirty-";
            break;
    case 4:
            cout << "Forty-";
            break;
    case 5:
            cout << "Fifty-";
            break;
    case 6:
            cout << "Sixty-";
            break;
    case 7:
            cout << "Seventy-";
            break;
    case 8:
            cout << "Eighty-";
            break;
    case 9:
            cout << "Ninety-";
            break;
    case 0:
            break;
        }
    
    
    switch(ones){
    case 1:
            cout << "one ";
            break;
    case 2:
            cout << "two ";
            break;
    case 3:
            cout << "three ";
            break;
    case 4:
            cout << "four ";
            break;
    case 5:
            cout << "five ";
            break;
    case 6:
            cout << "six ";
            break;
    case 7:
            cout << "seven ";
            break;
    case 8:
            cout << "eight ";
            break;
    case 9:
            cout << "nine ";
            break;
    case 0:
            break;
    }
}

void numbersToEnglish11(int num){
    switch(num){
        case 11:
            cout << "Eleven ";
            break;
        case 12:
            cout << "Twelve ";
            break;
        case 13:
            cout << "Thirteen ";
            break;
        case 14:
            cout << "Fourteen ";
            break;
        case 15:
            cout << "Fifteen ";
            break;
        case 16:
            cout << "Sixteen ";
            break;
        case 17:
            cout << "Seventeen ";
            break;
        case 18:
            cout << "Eighteen ";
            break;
        case 19:
            cout << "Nineteen ";
            break;
    }
}
    

