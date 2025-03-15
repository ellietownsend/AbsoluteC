//
//  Profit.cpp
//  bookCH1
//
//  Created by Ellie Townsend on 1/31/25.
//

#include "Profit.h"
#include <iostream>
using namespace std;

void profits(){
    cout << "Please provide the previous year's sales here: " << endl;
    double ogSales;
    cin >> ogSales;
    ogSales += (ogSales * .13);
    double const nowSALES = ogSales;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "The total sales is : " << nowSALES << endl;
    
    double ogProfits;
    cout << "Please provide the previous year's profit" << endl;
    cin >> ogProfits;
    ogProfits += (ogProfits * .27);
    double const PROFITS = ogProfits;
    cout << "The total proft is: " << PROFITS << endl;
    
    
    
    
    
}
