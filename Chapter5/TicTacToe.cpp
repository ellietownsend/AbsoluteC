//
//  TicTacToe.cpp
//  bookCH5
//
//  Created by Ellie Townsend on 2/18/25.
//

#include "TicTacToe.h"
#include <iostream>
using namespace std;

const int BOARDSIZE = 3;

char nextPlayerTurn(char player){
    if(player == 'X'){
        return 'Y';
    }
    else{
        return 'X';
    }
}

void createBoard(){
    char ticTacToe[BOARDSIZE][BOARDSIZE];
    int e = 0;
    for(int i = 0; i < BOARDSIZE; i++){ // will create three rows
        for(int j = 0; j < BOARDSIZE; j++){
            e += 1;
            ticTacToe[i][j] = static_cast<char>('1' + e - 1); // 49 + 1 - 1, results in 49, which is the value for one
        }
    }
    cout << "Below is the empty board, please enter \"Y\", if Y would like to play first, or \"X\" if X would like to play first" << endl;
    showBoard(ticTacToe);
    char player;
    cin >> player;
    char gameResults = play(ticTacToe, player);
    if(gameResults == 'n'){
        cout << "No one has won, Cats game!" << endl;
    }
    else if(gameResults == 'Y'){
        cout << "Y has won!" << endl;
    }
    else{
        cout << "X has won!" << endl;
    }
    
    // what if play returned a letter, signifying who won, and an arbituary letter if no one won
}

void showBoard(char a[][BOARDSIZE]){
    for(int i = 0; i < BOARDSIZE; i++){
        for(int j = 0; j < BOARDSIZE; j++){
            cout << a[i][j] << "  ";
        }
        cout << endl; // making a new line after each row
    }
}

char play(char a[][BOARDSIZE], char player){
    for(;;){
        cout << "Player \"" << player << "\" please enter what number you would like to enter your position " << endl;
        int playerPosition;
        cin >> playerPosition;
        
        switch(playerPosition){
            case 1:
                a[0][0] = player;
                break;
            case 2:
                a[0][1] = player;
                break;
            case 3:
                a[0][2] = player;
                break;
            case 4:
                a[1][0] = player;
                break;
            case 5:
                a[1][1] = player;
                break;
            case 6:
                a[1][2] = player;
                break;
            case 7:
                a[2][0] = player;
                break;
            case 8:
                a[2][1] = player;
                break;
            case 9:
                a[2][2] = player;
                break;
            default:
                cout << "Invalid position, please try again" << endl;
                break;
        }
        showBoard(a);
        if(won(a,player)){
            return player;
        }
        player = nextPlayerTurn(player);
    }
    return 'n';
    
}

bool won(char a[][BOARDSIZE], char player){
    // check vertically first row
    int count1 = 0;
    for(int i = 0; i < BOARDSIZE; i++){
        if(player == a[i][0]){
            count1 += 1;
        }
        else{
            break;
        }
    }
    if(count1 == 3){
        return true;
    }
    
    // check vertically second row
    int count2 = 0;
    for(int i = 0; i < BOARDSIZE; i++){
        if(player == a[i][1]){
            count2 += 1;
        }
        else{
            break;
        }
    }
    if(count2 == 3){
        return true;
    }
    
    // check vertically third row
    int count3 = 0;
    for(int i = 0; i < BOARDSIZE; i++){
        if(player == a[i][2]){
            count3 += 1;
        }
        else{
            break;
        }
    }
    if(count3 == 3){
        return true;
    }
    
    // check horizontally first row
    int count4 = 0;
    for(int i = 0; i < BOARDSIZE; i++){
        if(player == a[0][i]){
            count4 += 1;
        }
        else{
            break;
        }
    }
    if(count4 == 3){
        return true;
    }
    
    //check horizontally second row
    int count5 = 0;
    for(int i = 0; i < BOARDSIZE; i++){
        if(player == a[1][i]){
            count5 += 1;
        }
        else{
            break;
        }
    }
    if(count5 == 3){
        return true;
    }
    
    //check horizontally third row
    int count6 = 0;
    for(int i = 0; i < BOARDSIZE; i++){
        if(player == a[2][i]){
            count6 += 1;
        }
        else{
            break;
        }
    }
    if(count6 == 3){
        return true;
    }
    
    // check sideways
    if(player == a[0][0] && player == a[1][1] && player == a[2][2]){
        return true;
    }
    if(player == a[0][2] && player == a[1][1] && player == a[2][0]){
        return true;
    }
    
    return false;
}
