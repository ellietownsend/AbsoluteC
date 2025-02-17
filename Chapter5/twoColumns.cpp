//
//  twoColumns.cpp
//  bookCH5
//
//  Created by Ellie Townsend on 2/16/25.
//

#include "twoColumns.h"
#include <iostream>
using namespace std;

void createArray(){
    cout << "Please enter a list of numbers, we will then return these numbers, and a list of how many times they occured in the list. When you are done entering numbers, enter a negative number. " << endl;
    int userArray[50][2];
    int arrayUsed = 0;
    for(;;){
        int i;
        cin >> i;
        if(i < 0){
            cout << endl;
            break;
        }
        else{
            userArray[arrayUsed][0] = i;
            // all of them will be column 0, because the second column will be filled with how many times that number has been spotted in the array
            arrayUsed++;
            // when we enter another number, we increase our partially filled array
        }
    }
    count(userArray, arrayUsed);
}

void count(int a[][2], int& arrayUsed){
    // when we give multidimentional array, we must put in second dimention
    // have to count how many occurances there are of a single number
    for(int i = 0; i < arrayUsed; i++){
        int count = 1;
        for(int j = i + 1; j < arrayUsed; j++){
            if(a[i][0] == a[j][0]){
                count += 1;
                for(int e = j; e < arrayUsed; e++){
                    a[e][0] = a[e+1][0];
                }
                arrayUsed -= 1;
            }
            a[i][1] = count;
        }
    }
    print(a, arrayUsed);
}

void print(int a[][2], int& arrayUsed){
    cout << "N  Count" << endl;
    for(int i = 0; i <  arrayUsed; i++){
        cout << a[i][0] << "    " << a[i][1] << endl;
    }
}
