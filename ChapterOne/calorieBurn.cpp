//
//  calorieBurn.cpp
//  bookCH1
//
//  Created by Ellie Townsend on 2/2/25.
//

#include "calorieBurn.h"
#include <iostream>
using namespace std;

void caloriesBurnt(){
    
    cout << "Please input your weight: " << endl;
    double weight;
    cin >> weight;
    
    double caloriesBurnt = 0;
    double mph = 4;
    int time = 15;
    
    double metperHour = 10 / 6;
    
    for(int i = 0; i < time; i++){
        double met = mph * metperHour;
        double caloriesBurntThisMin = 0.0175 * met * weight;
        caloriesBurnt += caloriesBurntThisMin;
        if(i > 3 && i % 4 == 0){
            mph += 2;
        }
        
    }
    cout << "The total calories burnt is: " << caloriesBurnt << endl;
    
}
