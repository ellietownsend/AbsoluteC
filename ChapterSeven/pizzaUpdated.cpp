//
//  pizzaUpdated.cpp
//  bookCH7
//
//  Created by Ellie Townsend on 2/26/25.
//

#include "pizzaUpdated.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Pizza {
public:
    void setType(string typeDesired);
    void setSize(string sizeDesired);
    void setToppings(int amount);
    string getType();
    string getSize();
    int getToppings();
    void outputDescription();
    double computePrice();
private:
    string type;
    string size;
    int toppings;
};

string Pizza::getType(){
    return type;
}
string Pizza::getSize(){
    return size;
}
int Pizza::getToppings(){
    return toppings;
}

class Order{
public:
    Order();
    void returnOrders(); // iterate through the vector
    void addOrder(Pizza newPizza);
private:
    vector<Pizza> pizzaOrders;
};

Order::Order(){}

void Order::returnOrders(){
    for(int i = 0; i < pizzaOrders.size(); i++){
        cout << "The size of pizza " << i + 1 << " is " << pizzaOrders[i].getSize() << endl;
        cout << "The type of pizza " << i + 1 << " is " << pizzaOrders[i].getType() << endl;
        cout << "The amount of toppings on pizza " << i + 1 << " is " << pizzaOrders[i].getToppings() << endl;
    }
}

void Order::addOrder(Pizza newPizza){
    pizzaOrders.push_back(newPizza);
}

void Pizza::setType(string typeDesired){
    type = typeDesired;
}

void Pizza::setSize(string sizeDesired){
    size = sizeDesired;
}

void Pizza::outputDescription() {
    cout << "You have selected a " << size << " " << type << " pizza with " << getToppings() << " topping(s)." << endl;
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
    Order myOrder;
    char answer;
    do {
        Pizza newOrder;
        cout << "How many toppings would you like? Please enter \"0\" for none, \"1\" for one, etc." << endl;
        int topping;
        cin >> topping;
        newOrder.setToppings(topping);
        cin.ignore(1000, '\n');
        
        cout << "Would you like deep dish, hand tossed, or pan?" << endl;
        string type;
        getline(cin,type);
        newOrder.setType(type);
        
        cout << "Would you like a small, medium, or large pizza?" << endl;
        string size;
        getline(cin, size);
        newOrder.setSize(size);
        
        myOrder.addOrder(newOrder);
        
        int currentOrderPrice = newOrder.computePrice();
        newOrder.outputDescription();
        
        cout << "The price of the current pizza is: $" << currentOrderPrice << endl;
        totalPrice += currentOrderPrice;
        cout << "The total of your overall purchase is: $" << totalPrice << endl;
        
        
        cout << "Would you like to order another pizza? Select \"y\" for yes." << endl;
        cin >> answer;
        // at the very end we are taking in a char
        cin.ignore(1000, '\n');
    }while(answer == 'y');
    myOrder.returnOrders();
}
