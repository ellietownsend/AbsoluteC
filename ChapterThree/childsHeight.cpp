//
//  childsHeight.cpp
//  bookCH3
//
//  Created by Ellie Townsend on 2/9/25.
//

#include "childsHeight.h"
#include <iostream>
using namespace std;

void childsHeightPrompts(){
    char answer;
    do{
        cout << "Please enter the gender of the child: \"M\" for male, and \"F\" for female" << endl;
        char gender;
        cin >> gender;
        
        cout << "Please enter the height of the mother in feet, then in inches" << endl;
        int mFeet;
        int mInches;
        cin >> mFeet;
        cin >> mInches;
        int mTotalInches = (mInches + (mFeet * 12));
        
        cout << "Please enter the height of the father in feet, then in inches" << endl;
        int fFeet;
        int fInches;
        cin >> fFeet;
        cin >> fInches;
        int fTotalInches = (fInches + (fFeet * 12));
        
        
        cout << "The height of the child is predicted to be: ";
        childsHeight(gender, mTotalInches, fTotalInches);
        cout << " feet." << endl;
        
        cout << "Would you like to input further information? " << endl;
        cin >> answer;
    } while(answer != 'n');
    
}

void childsHeight(char gender, int mInches, int fInches){
    int childsHeight = 0;
    if(gender == 'M'){
        childsHeight = (((mInches * (13.0/12)) + fInches) / 2);
    }
    else{
        childsHeight = (((fInches * (12.0/13)) + mInches) / 2);
    }
    int childsHeightInFeet = childsHeight / 12;
    double childsHeightInInches = childsHeight % 12;
    cout << childsHeightInFeet << "." << childsHeightInInches;
}
