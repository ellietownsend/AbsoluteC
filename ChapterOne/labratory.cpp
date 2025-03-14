//
//  labratory.cpp
//  bookCH1
//
//  Created by Ellie Townsend on 1/31/25.
//

#include <iostream>
using namespace std;
void amountTillDead(){
    // Collecting the grams needed to kill a mouse, how many grams the mouse weighed, and the desired weight of the person
    cout << "Please enter the amount needed to kill a mouse: ";
    double toKillMouse;
    cin >> toKillMouse;
    cout << "Please enter the weight of the mouse: ";
    double gramOfMouse;
    cin >> gramOfMouse;
    cout << "Please enter your desired weight after diet: ";
    double poundOfHuman;
    cin >> poundOfHuman;
    
    // Artifical sweetener and soda
    const double AS = 0.001;
    const int SODA = 350;
    
    // Amount of artifical sweeterner in soda:
    const double asInSoda = SODA / 100;
    
    
    double oneGram = .002204;
    double humanIngrams = (poundOfHuman / oneGram);
    double toKillHuman = (humanIngrams / 7);
    double howManySodas = (toKillHuman / asInSoda);
    cout << "Sodas needed to drink to kill a human: " << howManySodas << endl;
}

