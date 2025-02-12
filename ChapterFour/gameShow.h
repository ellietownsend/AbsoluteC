//
//  gameShow.hpp
//  bookCH4
//
//  Created by Ellie Townsend on 2/12/25.
//

#ifndef gameShow_h
#define gameShow_h

#include <stdio.h>
int switchDoors(int playersChoice, int revealedConsolationPrize);
int revealConsolationPrize(int playerChoice, int doorWithPrize);
void calculationForWins(int revealedConsolationPrize, int playersChoice, int doorWithPrize, int& winsByStaying, int& winsBySwitching);
int playersChoice();
int randomDoorGeneration();
void gameShow();

#endif /* gameShow_hpp */
