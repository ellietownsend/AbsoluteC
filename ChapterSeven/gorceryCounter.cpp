//
//  gorceryCounter.cpp
//  bookCH7
//
//  Created by Ellie Townsend on 2/25/25.
//

#include "gorceryCounter.h"
#include <iostream>
using namespace std;

class Counter{
public:
    Counter(int userlimit);
    Counter();
    void resetCounter();
    void input();
    void output();
    void incr1(double price);
    void incr10(double price);
    void incr100(double price);
    void incr1000(double price);
    bool overFlow();
    
private:
    int limit = 0;
    double spent = 0;
};

void Counter::output(){
    cout << "The amount you have currently spent is: " << spent << endl;
}

Counter::Counter(int userlimit){
    limit = userlimit;
}

Counter::Counter()
: limit(0){}

void Counter::resetCounter(){
    limit = 0;
}

void Counter::input(){
    // Obtaining the user's budget
    cout << "Please enter what your budget is: " << endl;
    int budget;
    cin >> budget;
    *this = Counter(budget);
    char answer ='n';
    
        do{
            cout << "Please enter a letter, 'a' adds one to the amount spent, 's' adds 10, 'd' adds 100, 'f' adds 1000." << endl;
            char choice;
            cin >> choice;
            cout << "Great, now please enter a number 1-9 that you would like to add a that digits place " << endl;
            int add;
            cin >> add;
            switch(choice){
                case 'a':
                    incr1(add);
                    break;
                case 's':
                    incr10(add);
                    break;
                case 'd':
                    incr100(add);
                    break;
                case 'f':
                    incr1000(add);
                    break;
                default:
                    cout << "Invalid option entered" << endl;
            }
            output();
            if(!overFlow()){
                cout << "Would you like to add another item to your list? Please input 'y' if so, and any other letter if not" << endl;
                cin >> answer;
            }
            else{
                cout << "You have gone over budget!" << endl;
                break;
            }
            
        }while(answer == 'y');
}

void Counter::incr1(double price){
    spent += (price/100);
}


void counterMain(){
    Counter mycount;
    mycount.input();
}

bool Counter::overFlow(){
    if(spent > limit){
        return true;
    }
    return false;
}

void Counter::incr10(double price){
    spent += (price/10);
}

void Counter::incr100(double price){
    spent += price;
}

void Counter::incr1000(double price){
    spent += price*10;
}





