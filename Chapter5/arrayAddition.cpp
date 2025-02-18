//
//  arrayAddition.cpp
//  bookCH5
//
//  Created by Ellie Townsend on 2/17/25.
//

#include "arrayAddition.h"
#include <iostream>
using namespace std;

const int MAXLENGTH = 20;

void arrayAdditionMain(){
    cout << "This program outputs the addition of the two large numbers you provide below. The numbers cannot be more than 20 in length, and there will be an error if the addition of these two numbers is more than 20 in length" << endl;
    char num1[MAXLENGTH];
    char num2[MAXLENGTH];
    
    fillArray(num1);
    fillArray(num2);
    
    reverse(num1);
    reverse(num2);
    
    arrayAddition(num1, num2);
    
}

void fillArray(char a[]){
    cout << "Please input the number (max " << MAXLENGTH << " digits), and input a non-digit character to mark the end: " << endl;
    int i = 0;
    while (i < MAXLENGTH) {
        char j;
        cin >> j;
        if (!isdigit(j)) {
            break;  // End the input if non-digit character is entered
        }
        a[i] = j;
        i++;
    }

    while (i < MAXLENGTH) {
        a[i] = '0';
        i++;
    }
}

void reverse(char a[]){
    char temp;
    for(int i = 0; i < MAXLENGTH/2 ; i++){
        temp = a[i];
        a[i] = a[MAXLENGTH - 1 - i];
        a[MAXLENGTH - 1 - i] = temp;
    }
}

void reverse(int a[]){
    int temp;
    for(int i = 0; i < MAXLENGTH/2 ; i++){
        temp = a[i];
        a[i] = a[MAXLENGTH - 1 - i];
        a[MAXLENGTH - 1 - i] = temp;
    }
}


void arrayAddition(char a[], char b[]){
    int carryOver = 0;
    int added[MAXLENGTH];
    for(int i = 0; i < MAXLENGTH; i++){
        int temp = ((static_cast<int>(a[i]) - '0') + (static_cast<int>(b[i]) - '0')) + carryOver;
        
        if(temp >= 10){
            cout << "Made it here" << endl;
            carryOver = temp / 10;
            added[i] = temp % 10;
        }
        else{
            carryOver = 0;
            added[i] = temp;
        }
        
    }
    printArray(added, MAXLENGTH);
}

void printArray(int a[], int size){
    reverse(a);
    for(int i = 0; i < size; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
