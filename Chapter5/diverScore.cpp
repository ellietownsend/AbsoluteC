//
//  diverScore.cpp
//  bookCH5
//
//  Created by Ellie Townsend on 2/17/25.
//

#include "diverScore.h"
#include <iostream>
using namespace std;
const int JUDGES = 7;

void diverScoreMain(){
    float scores[JUDGES];
    int size = JUDGES;
    for(int i = 0; i < JUDGES; i++){
        cout << "Judge " << i + 1 << " please input your score: " << endl;
        int score;
        cin >> score;
        if(score > 0 && score <= 10){
            scores[i] = score;
        }
        else{
            cout << "Invalid score, please try again" << endl;
            i--;
        }
    }
    cout << "Please enter the level of difficulty: " << endl;
    double levelOfDifficulty;
    cin >> levelOfDifficulty;
    while(! (levelOfDifficulty > 1.2 && levelOfDifficulty <= 3.8)){
        cout << "Invalid level of difficulty, please re-enter difficulty:" << endl;
        cin >> levelOfDifficulty;
    }
    
    
    cout << "The calcutated score is: " << calculation(scores, levelOfDifficulty, size) << endl;
}

double calculation(float a[], double levelOfDifficulty, int& size){
    // remove the lowest and highest score from the array
        int temp = 0;
        // want to loop once, removing the smallest from the array
        for(int e = 0; e < size; e++){
            if(a[e] < a[e+1]){
                temp = a[e];
                a[e] = a[e+1];
                a[e+1] = temp;
            }
            // exit swapping of values
        } // exit for loop, the smallest value should be at the end
        size--;
    
    // want to loop to find the largest
    int temp2 = 0;
    for(int i = 0; i < size; i++){
        if(a[i] > a[i+1]){
            temp2 = a[i];
            a[i] = a[i+1];
            a[i+1] = temp2;
        }
    }
    size--;
    
    double sum = addScores(a, size) * levelOfDifficulty;
    return (sum * 0.6);
    
    
    // add the remaning scores
}

// check the array was elimnating the littlist two numbers
void printArray(float a[], int size){
    for(int i = 0; i < size; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

double addScores(float a[], int& size){
    int totalScore = 0;
    for(int i = 0; i < size; i++){
        totalScore += a[i] ;
    }
    return totalScore;
}
