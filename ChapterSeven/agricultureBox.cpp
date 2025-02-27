//
//  agricultureBox.cpp
//  bookCH7
//
//  Created by Ellie Townsend on 2/27/25.
//

#include "agricultureBox.h"
#include <iostream>
#include <cstdlib>
using namespace std;

const int SIZE = 3;

class BoxOfProduce{
public:
    BoxOfProduce();
    void addProduce(string produce1, string produce2, string produce3);
    void changeProduce(string removedProduce, string addedProduce);
    void outputProduceBox();
private:
    string boxOfProduce[SIZE];
    static int flyer;
    bool containsFlyer = false;
};

int BoxOfProduce::flyer = 5;


BoxOfProduce::BoxOfProduce()
:boxOfProduce(""){}

void BoxOfProduce::addProduce(string produce1, string produce2, string produce3){
    boxOfProduce[0] += produce1;
    boxOfProduce[1] += produce2;
    boxOfProduce[2] += produce3;
}

void BoxOfProduce::changeProduce(string removedProduce, string addedProduce){
    for(int i = 0; i < SIZE; i++){
        if(removedProduce == boxOfProduce[i]){
            boxOfProduce[i] = addedProduce;
            break;
        }
    }
    outputProduceBox();
}

void BoxOfProduce::outputProduceBox(){
    cout << "Box: " << endl;
    for(int i = 0; i < SIZE; i++){
        cout << boxOfProduce[i] << endl;
        if(boxOfProduce[i] == "Tomatillo"){
            if(flyer > 0){
                flyer -= 1;
                containsFlyer = true;
            }
        }
    }
    if(containsFlyer){
        cout << "salsa verde recipe" << endl;
    }
    cout << endl;
}


void menu(){
    cout << "Welcome! Your box has been randomly selected below:" << endl;
    char response = 'n';
    do{
        BoxOfProduce myBox;
        string produceOptions[5] = {"Broccoli", "Tomato", "Kiwi", "Kale", "Tomatillo"};
        string produce1 = produceOptions[(0 + (rand() % 5))];
        string produce2 = produceOptions[(0 + (rand() % 5))];
        string produce3 = produceOptions[(0 + (rand() % 5))];
        
        myBox.addProduce(produce1, produce2, produce3);
        myBox.outputProduceBox();
        
        
        char answer = 'y';
        cout << "If you are you happy with your produce box, press \"y\", if you would like to make changes, select any other key: " << endl;
        cin >> answer;
        cin.ignore(1000,'\n');
        
        
        while(answer != 'y'){
            cout << "Please enter the item you would like to remove: " << endl;
            string change;
            getline(cin,change);
            cout << "Please enter the item you would like to add: " << endl;
            string add;
            getline(cin,add);
            
            myBox.changeProduce(change, add);
            
            cout << "If you are you happy with your produce box, press \"y\", if you would like to make changes, select any other key: " << endl;
            cin >> answer;
            cin.ignore(1000,'\n');
        }
        myBox.outputProduceBox();
        
        
        cout << "Would you like to make another box? Select \"y\" if yes, and any other key if no: " << endl;
        cin >> response;
        cin.ignore(1000, '\n');
    }while(response == 'y');
}
    
    
    
    

