//
//  insertGrades.cpp
//  bookCH5
//
//  Created by Ellie Townsend on 2/17/25.
//

#include "insertGrades.h"
#include <iostream>
using namespace std;
const int GRADES = 6;

void insertGrades(){
    cout << "This program is dedicated to entering grades in a database, that will then let you view how many students got which grades. Grades should be input as a number 0-5. " << endl << "To stop entering grades, please input a negative number." << endl;
    int grades[GRADES];
    fillArray(grades, GRADES);
    for(;;){
        cout << "Please enter the grade of a student: " << endl;
        int grade;
        cin >> grade;
        if(grade < 0){
            break;
        }
        if(grade > 5){
            cout << "Invalid grade, please re-enter the number. " << endl;
            continue;
        }
        grades[grade] += 1;
    }
    displayArray(grades, GRADES);
}

void fillArray(int a[], int size){
    for(int i = 0; i < size; i++){
        a[i] = 0;
    }
}

void displayArray(int a[], int size){
    for(int i = 0; i < size; i++){
        cout << a[i] << " grade(s) of " << i << endl;;
    }
}

