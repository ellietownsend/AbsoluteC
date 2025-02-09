//
//  deviation.cpp
//  bookCH3
//
//  Created by Ellie Townsend on 2/8/25.
//

#include "deviation.h"
#include <iostream>
#include <cmath>
using namespace std;


void promptsForDeviation(){
    char answer;
    do{
        cout << "Please provide the four numbers you would like to be shown the average of, and also the standard deviation of: " << endl;
        double a;
        cin >> a;
        
        double b;
        cin >> b;
        
        double c;
        cin >> c;
        
        double d;
        cin >> d;
        
        deviation(a, b, c, d);
        
        cout << "Would you like to do another calculation?" << endl;
        cin >> answer;
    } while(answer != 'n');
}
void deviation(double a, double b, double c, double d){
    
    cout << "The average of the four numbers is: " << average(a, b, c, d) << endl;
    cout << "The standard deviation of the four numbers is: " << standardDeviation(a, b, c, d, average(a, b, c, d)) << endl;
    
    
}
double standardDeviation(double a, double b, double c, double d, double average){
    double e = 0;
    e += pow((a - average), 2);
    e += pow((b - average), 2);
    e += pow((c - average), 2);
    e += pow((d - average), 2);
    
    double standardDeviation = sqrt(e/4);
    return standardDeviation;
}

double average(double a, double b, double c, double d){
    double average = ((a + b + c + d) / 4);
    return average;
}
