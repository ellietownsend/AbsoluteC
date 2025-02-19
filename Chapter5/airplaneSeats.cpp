//
//  airplaneSeats.cpp
//  bookCH5
//
//  Created by Ellie Townsend on 2/18/25.
//

#include "airplaneSeats.h"
#include <iostream>
#include <string>
using namespace std;

const int ROWS = 7;
const int COLUMNS = 4;

void selectSeat(int a[], char b[][COLUMNS]){
    string quit;
    string seat;
    int rowNumber = 0;
    char seatLetter;
    cout << "You can select a seat on this airplane by entering the row number followed by the letter, such as \"1A\"." << endl;
    do{
        cout << "Please enter a seat:" << endl;
        getline(cin,seat);
        
        // checks to make sure valid:
        if(static_cast<int>(seat[0]) >= 49 && static_cast<int>(seat[0]) <=55){
            rowNumber = static_cast<int>(seat[0]);
        }
        else{
            cout << "The row number you provided does not match a row number, please enter a valid row number (1-7)." << endl;
            continue;
        }
        
        if(static_cast<int>(seat[1]) >= 65 && static_cast<int>(seat[1] <= 68)){
            seatLetter = static_cast<int>(seat[1]);
        }
        else{
            cout << "The letter you provided does not match a seat, please enter a seat letter (A-D): " << endl;
            continue;
        }
        if(editGrid(rowNumber, b, seatLetter)){
            cout << "Great, you have selected " << static_cast<char>(rowNumber) << seatLetter << "." << endl;
            printArrays(a, b);
        }
        else{
            cout << " Please choose another seat." << endl;
        }
        
        
        cout << "\nIf you would like to select another seat, please enter \"continue\". If you are done slecting, please enter \"quit\"." << endl;
        getline(cin, quit);
    }while(quit != "quit");
    
}

void createGrid(){
    char airplaneSeats[ROWS][COLUMNS];
    int row[ROWS] = {1, 2, 3, 4, 5, 6, 7};
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLUMNS; j++){
            airplaneSeats[i][j] = static_cast<char>(65 + j);
        }
    }
    printArrays(row, airplaneSeats);
    selectSeat(row, airplaneSeats);
}

void printArrays(int a[], char b[][COLUMNS]){
    for(int i = 0; i < ROWS; i++){
        cout << a[i] << "  ";
        for(int j = 0; j < COLUMNS; j++){
            cout << b[i][j] << " ";
            if(b[i][j] == 'B'){
                cout << " ";
            }
        }cout << endl;
    }
}

bool editGrid(int row, char b[][COLUMNS], int seat){
    switch(row){
            // seven cases, for seven rows
        case 49:
            switch(seat){
                case 65:
                    if(b[0][0] != 'X'){
                        b[0][0] = 'X';
                        return true;
                    }
                    else{
                        cout << "Seat is taken.";
                        return false;
                    }
                case 66:
                    if(b[0][1] != 'X'){
                        b[0][1] = 'X';
                        return true;
                    }
                    else{
                        cout << "Seat is taken.";
                        return false;
                    }
                case 67:
                    if(b[0][2] != 'X'){
                        b[0][2] = 'X';
                        return true;
                    }
                    else{
                        cout << "Seat is taken.";
                        return false;
                    }
                case 68:
                    if(b[0][3] != 'X'){
                        b[0][3] = 'X';
                        return true;
                    }
                    else{
                        cout << "Seat is taken.";
                        return false;
                    }
            }
            break;
        case 50:
            switch(seat){
                case 65:
                    if(b[1][0] != 'X'){
                        b[1][0] = 'X';
                        return true;
                    }
                    else{
                        cout << "Seat is taken.";
                        return false;
                    }
                case 66:
                    if(b[1][1] != 'X'){
                        b[1][1] = 'X';
                        return true;
                    }
                    else{
                        cout << "Seat is taken.";
                        return false;
                    }
                case 67:
                    if(b[1][2] != 'X'){
                        b[1][2] = 'X';
                        return true;
                    }
                    else{
                        cout << "Seat is taken.";
                        return false;
                    }
                case 68:
                    if(b[1][3] != 'X'){
                        b[1][3] = 'X';
                        return true;
                    }
                    else{
                        cout << "Seat is taken.";
                        return false;
                    }
            }
            break;
        case 51:
            switch(seat){
                case 65:
                    if(b[2][0] != 'X'){
                        b[2][0] = 'X';
                        return true;
                    }
                    else{
                        cout << "Seat is taken.";
                        return false;
                    }
                case 66:
                    if(b[2][1] != 'X'){
                        b[2][1] = 'X';
                        return true;
                    }
                    else{
                        cout << "Seat is taken.";
                        return false;
                    }
                case 67:
                    if(b[2][2] != 'X'){
                        b[2][2] = 'X';
                        return true;
                    }
                    else{
                        cout << "Seat is taken.";
                        return false;
                    }
                case 68:
                    if(b[2][3] != 'X'){
                        b[2][3] = 'X';
                        return true;
                    }
                    else{
                        cout << "Seat is taken.";
                        return false;
                    }
            }
            break;
        case 52:
            switch(seat){
                case 65:
                    if(b[3][0] != 'X'){
                        b[3][0] = 'X';
                        return true;
                    }
                    else{
                        cout << "Seat is taken.";
                        return false;
                    }
                case 66:
                    if(b[3][1] != 'X'){
                        b[3][1] = 'X';
                        return true;
                    }
                    else{
                        cout << "Seat is taken.";
                        return false;
                    }
                case 67:
                    if(b[3][2] != 'X'){
                        b[3][2] = 'X';
                        return true;
                    }
                    else{
                        cout << "Seat is taken.";
                        return false;
                    }
                case 68:
                    if(b[3][3] != 'X'){
                        b[3][3] = 'X';
                        return true;
                    }
                    else{
                        cout << "Seat is taken.";
                        return false;
                    }
            }
            break;
        case 53:
            switch(seat){
                case 65:
                    if(b[4][0] != 'X'){
                        b[4][0] = 'X';
                        return true;
                    }
                    else{
                        cout << "Seat is taken.";
                        return false;
                    }
                case 66:
                    if(b[4][1] != 'X'){
                        b[4][1] = 'X';
                        return true;
                    }
                    else{
                        cout << "Seat is taken.";
                        return false;
                    }
                case 67:
                    if(b[4][2] != 'X'){
                        b[4][2] = 'X';
                        return true;
                    }
                    else{
                        cout << "Seat is taken.";
                        return false;
                    }
                case 68:
                    if(b[4][3] != 'X'){
                        b[4][3] = 'X';
                        return true;
                    }
                    else{
                        cout << "Seat is taken.";
                        return false;
                    }
            }
            break;
        case 54:
            switch(seat){
                case 65:
                    if(b[5][0] != 'X'){
                        b[5][0] = 'X';
                        return true;
                    }
                    else{
                        cout << "Seat is taken.";
                        return false;
                    }
                case 66:
                    if(b[5][1] != 'X'){
                        b[5][1] = 'X';
                        return true;
                    }
                    else{
                        cout << "Seat is taken.";
                        return false;
                    }
                case 67:
                    if(b[5][2] != 'X'){
                        b[5][2] = 'X';
                        return true;
                    }
                    else{
                        cout << "Seat is taken.";
                        return false;
                    }
                case 68:
                    if(b[5][3] != 'X'){
                        b[5][3] = 'X';
                        return true;
                    }
                    else{
                        cout << "Seat is taken.";
                        return false;
                    }
            }
            break;
        case 55:
            switch(seat){
                case 65:
                    if(b[6][0] != 'X'){
                        b[6][0] = 'X';
                        return true;
                    }
                    else{
                        cout << "Seat is taken.";
                        return false;
                    }
                case 66:
                    if(b[6][1] != 'X'){
                        b[6][1] = 'X';
                        return true;
                    }
                    else{
                        cout << "Seat is taken.";
                        return false;
                    }
                case 67:
                    if(b[6][2] != 'X'){
                        b[6][2] = 'X';
                        return true;
                    }
                    else{
                        cout << "Seat is taken.";
                        return false;
                    }
                case 68:
                    if(b[6][3] != 'X'){
                        b[6][3] = 'X';
                        return true;
                    }
                    else{
                        cout << "Seat is taken.";
                        return false;
                    }
            }
            break;
    }
    return false;
}
