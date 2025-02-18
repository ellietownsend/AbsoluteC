//
//  TicTacToe.hpp
//  bookCH5
//
//  Created by Ellie Townsend on 2/18/25.
//

#ifndef TicTacToe_h
#define TicTacToe_h

#include <stdio.h>
void showBoard(char a[][3]);
void createBoard();
char play(char a[][3], char player);
bool won(char a[][3], char player);
char nextPlayerTurn(char player);


#endif /* TicTacToe_hpp */
