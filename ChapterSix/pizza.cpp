//
//  pizza.cpp
//  bookCH6
//
//  Created by Ellie Townsend on 2/21/25.
//

#include "pizza.h"
#include <iostream>
#include <string>
using namespace std;

class Pizza{
public:
    void setType(string typeDesired);
    void setSize(string sizeDesired);
    void setToppings(int amount);
    void outputDescription();
    double computePrice();
private:
    string type;
    string size;
    int toppings;
};

void Pizza::setType(string typeDesired){
    type = typeDesired;
}

void Pizza::setSize(string sizeDesired){
    size = sizeDesired;
}

void Pizza::outputDescription(){
    cout << "You have selected to order a " << size << " " << type << " pizza with " << toppings << " topping(s)." << endl;
}

double Pizza::computePrice(){
    int price = 0;
    if(size == "small"){
        price += 10;
    }
    else if(size == "medium"){
        price += 14;
    }
    else if(size == "large"){
        price += 17;
    }
    while(toppings != 0){
        price += 2;
        toppings--;
    }
    return price;
}

void Pizza::setToppings(int amount){
    toppings = amount;
}

void orderPizza(){
    int totalPrice = 0;
    char answer;
    do{
        Pizza order;
        cout << "Would you like deep dish, hand tossed, or pan?" << endl;
        string type;
        getline(cin,type);
        order.setType(type);
        
        cout << "Would you like a small, medium, or large pizza?" << endl;
        string size;
        getline(cin, size);
        order.setSize(size);
        
        cout << "How many toppings would you like? Please enter \"0\" for none, \"1\" for one, etc." << endl;
        int topping;
        cin >> topping;
        order.setToppings(topping);
        int currentOrderPrice = order.computePrice();
        order.outputDescription();
        cout << "The price of the current pizza is: $" << currentOrderPrice << endl;
        totalPrice += currentOrderPrice;
        cout << "The total of your overall purchase is: $" << totalPrice << endl;
        
        
        cout << "Would you like to order another pizza? Select \"y\" for yes." << endl;
        cin >> answer;
        // at the very end we are taking in a char
        cin.ignore(1000, '\n');
    }while(answer == 'y');
}
