//
//  hotDogStand.cpp
//  bookCH7
//
//  Created by Ellie Townsend on 2/25/25.
//

#include "hotDogStand.h"
#include <iostream>
using namespace std;

class HotDogStand{
public:
    HotDogStand(int standID, int sold);
    //Precondition: Sold > 0
    //Postcondition: We have set these properties to our object
    HotDogStand();
    //Precondition: No arguemnts were given,
    //Postcondition: we set both private variables to 0
    void justSold();
    //Precondition: sold > 0
    //Postcondition: we have added one
    int hotDogSold();
    static int totalHotDogsSold();
private:
    int ID;
    int hotDogsSold;
    static int totalSold;
};

int HotDogStand::totalSold = 0;

HotDogStand::HotDogStand(int standID, int sold)
: ID(standID), hotDogsSold(sold) {
    totalSold += hotDogsSold;
}

HotDogStand::HotDogStand()
:ID(0), hotDogsSold(0){}

void HotDogStand::justSold(){
    hotDogsSold += 1;
    totalSold +=1;
}

int HotDogStand::hotDogSold(){
    return hotDogsSold;
}

int HotDogStand::totalHotDogsSold(){
    return totalSold;
}

void hotDogTest(){
    HotDogStand hotDogStand1(987, 30);
    hotDogStand1.justSold();
    hotDogStand1.justSold();
    cout << "The number of hotdogs sold for stand one is: " << hotDogStand1.hotDogSold() << endl;
    
    HotDogStand hotDogStand2;
    
    HotDogStand hotDogStand3(345, 90);
    cout << "The total number of hotdogs sold is " << HotDogStand::totalHotDogsSold() << endl;
}




