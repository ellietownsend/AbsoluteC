//
//  princessElmination.cpp
//  bookCH7
//
//  Created by Ellie Townsend on 2/25/25.
//

#include "princessElmination.h"
#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> v){
    for(int i = 0; i < v.size(); i ++){
        cout << v[i];
    }
    cout << endl;
}

void eliminateEveryThird(vector<int> v){
    int position = 0; // position to start counting
        while (v.size() > 1) {
            position = (position + 2) % v.size();
            cout << "The suitor eliminated is at position " << v[position] << endl;
            v.erase(v.begin() + position);
            printVector(v); 
            cout << "The new size of the list is " << v.size() << endl;
        }

        cout << "The lucky suitor is at position " << v[0] << endl;
    }




void princessMain(){
    vector<int> v = {1,2,3,4,5,6};
    eliminateEveryThird(v);
}


