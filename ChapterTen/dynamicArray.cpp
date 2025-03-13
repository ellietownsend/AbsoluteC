//
//  dynamicArray.cpp
//  bookCH10
//
//  Created by Ellie Townsend on 3/11/25.
//

#include "dynamicArray.h"
#include <iostream>
#include <string>
using namespace std;

class DynamicArray{
public:
    DynamicArray();
    void getSize();
    void addEntry(string newEntry);
    void printArray();
    bool deleteEntry(string deleteEntry);
    string getEntry(int index);
    DynamicArray(const DynamicArray& array);
    DynamicArray& operator=(const DynamicArray& array);
    ~DynamicArray();
private:
    string *dynamicArray;
    int size;
};

DynamicArray::~DynamicArray(){
    if(size != 0){
        delete [] dynamicArray;
    }
}

DynamicArray& DynamicArray::operator=(const DynamicArray& array){
    size = array.size;
    for(int i = 0; i < array.size; i++){
        dynamicArray[i] = array.dynamicArray[i];
    }
    return *this;
}

DynamicArray::DynamicArray(const DynamicArray& array)
:size(array.size){
    dynamicArray = new string[array.size];
    for(int i = 0; i < size; i++){
        dynamicArray[i] = array.dynamicArray[i];
    }
}

string DynamicArray::getEntry(int index){
    if(index > size || index < 0){
        return NULL;
    }
    return dynamicArray[index];
}

bool DynamicArray::deleteEntry(string deleteEntry){
    bool var;
    if(size != 0){
        for(int i = 0; i < size; i++){
            if(deleteEntry == dynamicArray[i]){
                // Represent the only index we are not adding to the new array
                //found string, can go into deletion process
                //Going to create a new dynamic array
                string *temp;
                temp = new string[size-1];
                
                //Going to put everything BUT the string within there
                int e = 0;
                for(int j = 0; j < size-1; j++){
                    if(j == i){
                        e++;
                    }
                    temp[j] = dynamicArray[e];
                    e++;
                }
              
                delete [] dynamicArray;
                size -= 1;
                dynamicArray = temp;
                var = true;
            }
            else{
                var = false;
            }
        }
        return var;
    }
    else{
        cout<< "There is nothing to delete within the array." << endl;
        return false;
    }
}

void DynamicArray::addEntry(string newEntry){
    //Create a new dynamic array that is one size larger than the stored array
    if(size != 0){
        string *ptr;
        ptr = new string[size+1];
        
        int i;
        //Copy all elements from the previous array into the new array
        for(i = 0; i < size; i++){
            ptr[i] = dynamicArray[i];
        }
        //Add the new string to the last element of the array
        ptr[i] = newEntry;
        // Increment the size of the array
        size += 1;
        //Delete the old dynamic array
        delete [] dynamicArray;
        //Setting our pointer to the dynamic array equal to the array created by ptr
        dynamicArray = ptr;
    }
    else{
        dynamicArray = new string[1];
        dynamicArray[0] = newEntry;
        size += 1;
    }
}

DynamicArray::DynamicArray()
:size(0), dynamicArray(NULL){}

void DynamicArray::getSize(){
    cout << size << endl;
}



void createDynamicArray(){
    cout << "Testing array creation:" << endl;
    DynamicArray array1;
    array1.addEntry("hello");
    array1.addEntry("Hi");
    array1.addEntry("Ellie");
    array1.addEntry("Joan");
    cout << "Our current array looks like: " << endl;
    array1.printArray();
    
    
    cout << "\nTesting deleteing an entry:" << endl;
    array1.deleteEntry("Ellie");
    cout << "After deleting \"Ellie\" : " << endl;
    array1.printArray();
     
     
    cout << "\nTesting getting a position in the array:" << endl;
    cout << "Getting position 2: " << array1.getEntry(2) << endl;
    
 
    cout << "\nTesting copying an object into a NEWLY created object:" << endl;
    DynamicArray array2;
    array2.addEntry("hello");
    array2.addEntry("Hi");
    array2.addEntry("Ellie");
    array2.addEntry("Joan");
    DynamicArray array3 = array2;
    array3.printArray();
    
    
    cout << "\nTesting copying an object into an EXISTING  object:" << endl;
    DynamicArray array4;
    array4.addEntry("hello");
    array4.addEntry("Hi");
    array4.addEntry("Ellie");
    array4.addEntry("Joan");
    DynamicArray array5;
    array5.addEntry("Hey");
    array5.addEntry("Girl");
    array4 = array5;
    array4.printArray();
    
}

void DynamicArray::printArray(){
    for(int i = 0; i < size; i++){
        cout << dynamicArray[i] << endl;
    }
}


