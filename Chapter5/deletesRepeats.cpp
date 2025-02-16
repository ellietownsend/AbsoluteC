//
//  deletesRepeats.cpp
//  bookCH5
//
//  Created by Ellie Townsend on 2/16/25.
//

#include "deletesRepeats.h"
#include <iostream>
using namespace std;

void partiallyFill(){
    char a[10];
    a[0] = 'a';
    a[1] = 'b';
    a[2] = 'a';
    a[3] = 'c';
    a[4] = 'b';
    a[5] = 'e';
    int size = 6;
    deleteRepeats(a, size);
}
void deleteRepeats(char a[], int& sizeTakenByArray){
    // Plan of attack: compare the very first letter, to all the other letters
    for(int i = 0; i < sizeTakenByArray; i++){
        // will get us that first letter, but now we need to compare that first letter to every other letter
        for(int e = i + 1; e < sizeTakenByArray; e++){
            if(a[e] == a[i]){
                for(int t = e; t < sizeTakenByArray; t++){
                    a[t] = a[t+1];
                }
                sizeTakenByArray -=1;
            }
        }
    }
    for (int l = 0; l < sizeTakenByArray; l++){
        cout << a[l] << endl;
    }
}
