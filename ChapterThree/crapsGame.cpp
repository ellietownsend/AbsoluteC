//
//  crapsGame.cpp
//  bookCH3
//
//  Created by Ellie Townsend on 2/9/25.
//

#include "crapsGame.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

void craps(){
    int wins = 0;
    int losses = 0;
    int totalGames = 1000;
    
    for(int i = 1; i <= totalGames; i++){
        int dice1 = (1 + (rand() % 6));
        int dice2 = (1 + (rand() % 6));
        int comeOutRoll = dice1 + dice2;
        
        if(comeOutRoll == 7 || comeOutRoll == 11){
            wins += 1;
        }
        else if(comeOutRoll == 2 || comeOutRoll == 3 || comeOutRoll == 12){
            losses += 1;
        }
        
        else {
            int thePoint = comeOutRoll;
            int newComeOutRoll = 0;
            
            do {
                dice1 = (1 + (rand() % 6));
                dice2 = (1 + (rand() % 6));
                newComeOutRoll = dice1 + dice2;
            }while(newComeOutRoll != 7 && newComeOutRoll != thePoint);
            
            if(newComeOutRoll == 7){
                losses += 1;
            }
            else if(newComeOutRoll == thePoint){
                wins += 1;
            }
        }
    }
    double probability = ((double)wins / (wins + losses));
    cout << "You have won " << wins << " games." << endl << "You have lost " << losses << " games. " << endl << "The probability score of winning is " << probability << "%" << endl;
}
