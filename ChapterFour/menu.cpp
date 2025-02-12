//
//  menu.cpp
//  bookCH4
//
//  Created by Ellie Townsend on 2/11/25.
//

#include "menu.h"
#include <iostream>
using namespace std;

void menuSelection(){
    // When I hear about the switch statement, I always hear how its great for menus
    cout << "Please input the value of your voucher: " << endl;
    double valueOfVoucher;
    cin >> valueOfVoucher;
    
    cout << "Welcome to Ellie's Cafe!" << endl;
    cout << "Menu Items: " << endl;
    cout << "1: Bread - $3.50" << endl;
    cout << "2: Cake - $5.00" << endl;
    cout << "3: Pie - $4.00" << endl;
    cout << "4: Cookies - $2.50" << endl;
    while(valueOfVoucher != 0){
        cout << "Please input a number to order: " << endl;
        int menuItem;
        cin >> menuItem;
        deduction(valueOfVoucher, menuItem);
    }
    cout << "Voucher no longer has enough money for any more purchases." << endl;
            
     // switch does not need a ";" because theres a bunch of breaks
}
double deduction(double& valueOfVoucher, int menuItem){
    switch(menuItem){
        case 1:
            if(valueOfVoucher >= 3.50){
                valueOfVoucher -= 3.50;
                break;
            }
            else {
                cout << "You do not have enough for this item. Your remaning balance is: "<< valueOfVoucher << endl;
                break;
            }
        case 2:
            if(valueOfVoucher >= 5.00){
                valueOfVoucher -= 5.00;
                break;
            }
            else {
                cout << "You do not have enough for this item. Your remaning balance is: "<< valueOfVoucher << endl;
                break;
            }
        case 3:
            if(valueOfVoucher >= 4.00){
                valueOfVoucher -= 4.00;
                break;
            }
            else {
                cout << "You do not have enough for this item. Your remaning balance is: "<< valueOfVoucher << endl;
                break;
            }
        case 4:
            if(valueOfVoucher >= 2.50){
                valueOfVoucher -= 2.50;
                break;
            }
            else {
                cout << "You do not have enough for this item. Your remaning balance is: "<< valueOfVoucher << endl;
                break;
            }
    }
    return valueOfVoucher;
    
}
