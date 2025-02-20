//
//  couterType.cpp
//  bookCH6
//
//  Created by Ellie Townsend on 2/20/25.
//

#include "couterType.h"
#include <iostream>
using namespace std;

class counterType{
public:
    void setCount(double userCount);
    double getCount();
    void increaseCount();
    void decreaseCount();
private:
    int count = 0;
};

void counterType::setCount(double userCount){
    if(userCount >= 0){
        count = userCount;
        cout << "Your inital number is: " << count << endl;
    }
    else{
        cout << "Number cannot be a negative number" << endl;
    }
}

double counterType::getCount(){
    return count;
}

void counterType::increaseCount(){
    count += 1;
}

void counterType::decreaseCount(){
    if((count - 1) >= 0){
        count -= 1;
    }
    else{
        cout << "Cannot decrease number, becuase then it would be negative" << endl;
    }
    
}

void counterTypeInput(){
    counterType count1;
    cout << "Please enter a number: " << endl;
    int num;
    cin >> num;
    count1.setCount(num);
    char continuePlay;
    do{
        string answer;
        cout << "Would you like to add or subtract?" << endl;
        cin.ignore(1000, '\n');
        getline(cin,answer);
        if(answer == "add"){
            count1.increaseCount();
        }
        else{
            count1.decreaseCount();
        }
        cout << "Great your number is now: " << count1.getCount() << endl;
        cout << "Would you like to continue adding/subtracting? Please input \"y\" for yes, and \"n\" for no." << endl;
        cin >> continuePlay;
    }while(continuePlay != 'n');
}
