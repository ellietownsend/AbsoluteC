//
//  pig.cpp
//  bookCH3
//
//  Created by Ellie Townsend on 2/10/25.
//

#include "pig.h"
#include <iostream>
#include <cstdlib>

using namespace std;

void gamePig(){
    int totalScore = 0;
    cout << "Welcome to the game of pig!" << endl;
    int humanTotalScore = 0;
    int computerTotalScore = 0;
    
    do{
        totalScore = humanTurn(humanTotalScore) + computerTurn(computerTotalScore);
    }while(totalScore != 20);
    
}

int humanTurn(int humanTotalScore){
    int pointsAdded = 0;
    char playAgain;
    cout << "Press \"r\" to roll dice" << endl;
    cin >> playAgain;
        // a do while loop because they always have to roll at least once
    do{
        int dice = (1 + (rand() % 6));
        
        if(dice == 1){
            cout << "Player has rolled a one, it is now the computers turn" << endl;
            return 0; // player loses their turn, we exit while loop
        }
        else{ // will go to else statement if player rolls 2-6
            cout << "Player has added " << dice << endl;
            pointsAdded += dice;
            cout << "Press \"r\" to roll again, or \"h\" to hold and keep adding points to your score" << endl;
            cin >> playAgain;
        }
    }while(playAgain != 'h');
    cout << "The total amount of points added in this turn is " << pointsAdded << endl;
    // if player would like to stop playing they will hold
    return (pointsAdded + humanTotalScore);
}

int computerTurn(int computerTotalScore){
    int pointsAccumulated = 0;
    cout << "Computer will now roll dice" << endl;
    
    do{
        int dice = (1 + (rand() % 6));
        if (dice == 1){
            cout << "Computer has rolled a one, it is now the humans turn" << endl;
            return 0;
        }
        else{
            cout << dice << " has been added to the computers total." << endl;
            pointsAccumulated += dice;
        }
    }while(pointsAccumulated < 20);
    cout << "The total amount of points added in this turn is " << pointsAccumulated << endl;
    
    return (pointsAccumulated + computerTotalScore);
}
