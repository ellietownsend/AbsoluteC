//
//  zipCode.cpp
//  bookCH7
//
//  Created by Ellie Townsend on 2/26/25.
//

#include "zipCode.h"
#include <iostream>
#include <string>
using namespace std;

class ZipCode{
public:
    ZipCode(string userZipCode);
    //Precondition: string represents a zip code
    //Postcondition: string will be assigned to zipcode
    ZipCode(int zipCode);
    //Precondition: zipcode is given in int format
    //Postcondition: zipcode is turned into a string, and assigned to zipcode
    ZipCode();
    string returnAsString();
    void returnAsInt();
    
private:
    string zipCode;
    string zipCodeDigits;
    bool removeFirstAndLast();
    //Precondition: The first and last int's are one
    //PostCondition: The last and first digits will be removed
    void createBatches();
    //Precondition: zipcode must be 25 numbers in length
    //Postcondition: 5 equal groups of 5 will be created
    int binaryValues(string batch);
    void zipCodeDigitList(int zipCode);
};

string ZipCode::returnAsString(){
    return zipCodeDigits;
}

void ZipCode::returnAsInt(){
    for(int i = 0; i < zipCodeDigits.size(); i++){
        int temp = static_cast<int>((zipCodeDigits[i] - '0'));
        cout << temp;
    }
    cout << endl;
}

ZipCode::ZipCode()
:zipCode(""){}

ZipCode::ZipCode(string userZipCode)
: zipCode(userZipCode){
    removeFirstAndLast();
    createBatches();
}

ZipCode::ZipCode(int userZipCode){
    zipCode = to_string(userZipCode);
    removeFirstAndLast();
    createBatches();
}

bool ZipCode::removeFirstAndLast(){
    zipCode.erase(zipCode.begin());
    zipCode.erase(zipCode.end() - 1);
    return true;
}

void ZipCode::createBatches(){
    string batch1;
    string batch2;
    string batch3;
    string batch4;
    string batch5;
    for(int i = 0; i < zipCode.size(); i++){
        if(i >= 0 && i <= 4){
            batch1 += zipCode[i];
        }
        else if(i > 4 && i <= 9){
            batch2 += zipCode[i];
        }
        else if(i > 9 && i <= 14){
            batch3 += zipCode[i];
        }
        else if(i > 14 && i <= 19){
            batch4 += zipCode[i];
        }
        else if(i > 19 && i <= 24){
            batch5 += zipCode[i];
        }
    }
    binaryValues(batch1);
    binaryValues(batch2);
    binaryValues(batch3);
    binaryValues(batch4);
    binaryValues(batch5);
}

int ZipCode::binaryValues(string batch){
    int zipCodeDigit = 0;
    string values = "74210";
    for(int i = 0; i < batch.size(); i++){
        int temp1 = batch[i] - '0';
        int temp2 = values[i] - '0';
        zipCodeDigit += (temp1 * temp2);
        if(zipCodeDigit == 11){
            zipCodeDigit = 0;
        }
    }
    zipCodeDigitList(zipCodeDigit);
    return zipCodeDigit;
}

void ZipCodeMain(){
    ZipCode myZip("110100101000101011000010011");
    //Returned as a Int:
    myZip.returnAsInt();
    //Returned as a string:
    cout << myZip.returnAsString() << endl;
}

void ZipCode::zipCodeDigitList(int myZipCode){
    zipCodeDigits += to_string(myZipCode);
}
