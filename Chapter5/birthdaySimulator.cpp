//
//  birthdaySimulator.cpp
//  bookCH5
//
//  Created by Ellie Townsend on 2/17/25.
//

#include "birthdaySimulator.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

const string MONTHS[] = {"January", "Febuary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

const int DAYS[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void birthdaySimulatiorMain(){
    for(int i = 0; i < 50; i++){
        cout << "For " << i + 1 << " people, the probability of two birthdays is about " << runSimulator(i) << "%" << endl;
    }
}

double runSimulator(int amountOfPeople){
    int count = 0;
    for(int i = 0; i < 5000; i++){
        count += fillRoom(amountOfPeople);
    }
    return (count / 5000.0);
}

double fillRoom(int amountOfPeople){
    string bdays[amountOfPeople];
    for(int i = 0; i < amountOfPeople; i++){
        int month = (1 + (rand() % 12));
        int day = (1 + (rand() % DAYS[month-1]));
        bdays[i] = to_string(month) + "/" + to_string(day);
    }
    return count(bdays, amountOfPeople);
}

void printArray(string a[], int size){
    for(int i = 0; i < size; i++){
        cout << a[i] << endl;
    }
}

double count(string a[], int size){
    int count = 0;
    for(int i = 0; i < size; i++){
        for(int e = i + 1; e < size; e++){
            if(a[i] == a[e]){
                count += 1;
            }
        }
    }
    return count;
}





