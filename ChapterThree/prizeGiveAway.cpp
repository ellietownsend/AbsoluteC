//
//  prizeGiveAway.cpp
//  bookCH3
//
//  Created by Ellie Townsend on 2/10/25.
//

#include "prizeGiveAway.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

void prizeWinners(){
    int winnerOne = (1 + (rand() % 25));
    cout << "The randomly chosen finalist is number " << winnerOne << endl;
    
    int winnerTwo = 0;
    do{
        winnerTwo = (1 + (rand() % 25));
    }while(winnerTwo == winnerOne);
    cout << "The randomly chosen finalist is number " << winnerTwo << endl;
    
    int winnerThree;
    do{
        winnerThree = (1 + (rand() % 25));
    }while(winnerThree == winnerOne && winnerThree == winnerTwo);
    cout << "The randomly chosen finalist is number " << winnerThree << endl;
    
    int winnerFour;
    do{
        winnerFour = (1 + (rand() % 25));
    }while(winnerThree == winnerOne && winnerThree == winnerTwo && winnerThree == winnerFour);
    cout << "The randomly chosen finalist is number " << winnerFour << endl;
}

