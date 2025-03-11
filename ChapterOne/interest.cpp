//
//  interest.cpp
//  bookCH1
//
//  Created by Ellie Townsend on 2/2/25.
//

#include "interest.h"
#include <iostream>
using namespace std;

void faceValueCalculation(){
    cout << "Please enter the amount of money you need to loan: " << endl;
    double userNeeds;
    cin >> userNeeds;
    
    double const INTERESTRATE = .15;
    double userInterestRate = INTERESTRATE * userNeeds;
    
    cout << "Please input your preferred load period in months: " << endl;
    double loanPeriod;
    cin >> loanPeriod;
    
    double totalInterest = (loanPeriod / 12) * userInterestRate;
    double moneyPaying = userNeeds + totalInterest;
    
    double paymentPlan = moneyPaying / loanPeriod;
    
    cout << "The amount requested from the bank is: " << userNeeds << "\nThe total cost of the loan with interest is: " << moneyPaying << "\nThe monthly payment is: $" << paymentPlan << endl;
    
}
