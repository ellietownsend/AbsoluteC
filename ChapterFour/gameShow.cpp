//
//  gameShow.cpp
//  bookCH4
//
//  Created by Ellie Townsend on 2/12/25.
//

#include "gameShow.h"
#include <iostream>
#include <cstdlib>
using namespace std;

void gameShow(){
    int winsByStaying = 0;
    int winsBySwitching = 0;
    
    for(int i = 1; i < 1000; i++){
        //cout << "Welcome to Ellie's Super fantasic, and not silly at all, game show!" << endl;
        int doorWithPrize = randomDoorGeneration();
        int playerChoice = playersChoice();
        //cout << "But first... We would like to reveal a door that the prize is NOT behind" << endl;
        int revealedConsolationPrize = revealConsolationPrize(playerChoice, doorWithPrize);
        calculationForWins(revealedConsolationPrize, playerChoice, doorWithPrize, winsByStaying, winsBySwitching);
    }
    cout << "Wins by staying: " << ((double)winsByStaying/100) << "%" << endl << "Wins by switching: " << ((double)winsBySwitching/100) << "%" << endl;
}

int randomDoorGeneration(){
    // creating possible options for what door it could be behind
    int door = (1 + (rand() % 3));
    return door;
}

int playersChoice(){
    int playersChoice = (1 + (rand() % 3));
    return playersChoice;
}

void calculationForWins(int revealedConsolationPrize, int playersChoice, int doorWithPrize, int& winsByStaying, int& winsBySwitching){
    // if the player decided to stay
    if (playersChoice == doorWithPrize){
        winsByStaying += 1;
    }
    // player decides to switch
    else if(switchDoors(playersChoice,revealedConsolationPrize) == doorWithPrize){
        winsBySwitching += 1;
    }
}

int revealConsolationPrize(int playerChoice, int doorWithPrize){
    int doorWithConsolation;
    do{
        doorWithConsolation = (1 + (rand() % 3));
    }while((playerChoice != doorWithPrize) && (doorWithConsolation != doorWithPrize));
    return doorWithConsolation;
    // We do not want to open the door the player choose, AND we do not want to open the prize door
}

// call by reference, because i am changing the players choice
int switchDoors(int playersChoice, int revealedConsolationPrize){
    int temp = playersChoice;
    int newChoice;
    do{
        newChoice = (1 + (rand() % 3));
    }while((newChoice == temp) && (playersChoice == revealedConsolationPrize));
    // we do not want the player to "rechose" their old choice, and we do not want them to choose the consolation prize
    return newChoice;
}



