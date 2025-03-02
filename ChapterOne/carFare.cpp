//
//  carFare.cpp
//  bookCH1
//
//  Created by Ellie Townsend on 2/2/25.
//

#include "carFare.h"
#include <iostream>
using namespace std;

void calcCarFare(){
    
    cout << "Please enter the distance traveled: " << endl;
    double distanceTraveled;
    cin >> distanceTraveled;
    
    cout << "Please enter the time it took: " << endl;
    double time;
    cin >> time;
    double total = 0.2 * time;
    
    for(int i = 1; i <= distanceTraveled; i++){
        if(i <= 2){
            total += 2;
            
        }
        else if(i <= 8){
            total += .50;
            
        }
        else{
            total += 1;
        }
    }
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);
    cout << "The total for your ride is: " << total << endl;
    
}
