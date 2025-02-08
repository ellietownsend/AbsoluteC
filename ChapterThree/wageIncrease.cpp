//
//  wageIncrease.cpp
//  bookCH3
//
//  Created by Ellie Townsend on 2/7/25.
//

#include "wageIncrease.h"
#include <iostream>
#include <string>
using namespace std;

double salaryInXYears(int, double, int);

void increaseInWage(){
    char stay;
    do{
        cout << "Please enter how much you made last year: " << endl;
        double lastYearsWage;
        cin >> lastYearsWage;
        
        cout << "Please enter this years wage: " << endl;
        double thisYearsWage;
        cin >> thisYearsWage;
        
        double hikeRate = (((thisYearsWage - lastYearsWage)/lastYearsWage) * 100);
        cout << "Your increase in wage is: " << hikeRate << "%" << endl;
        
        cout << "How many years into the future would you like to know your salary? " << endl;
        int years;
        cin >> years;
        cout << "Your excpected salary in "<< years << " years is: " << salaryInXYears(thisYearsWage, hikeRate, years) << endl;
        
        
        
        cout << "Would you like to re-enter any information? Press \"y\" for yes and \"n\" for no" << endl;
        cin >> stay;
        
    }while(stay != 'n');
}

double salaryInXYears(int salary, double hikeRate, int years){
    for (int i = 0; i < years; i++){
        salary *= (1 + hikeRate / 100);
    }
    return salary;
}



