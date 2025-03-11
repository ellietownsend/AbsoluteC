//
//  twoDim.cpp
//  bookCH10
//
//  Created by Ellie Townsend on 3/8/25.
//

#include "twoDim.h"
#include <iostream>
using namespace std;

class TwoD{
public:
    TwoD();
    TwoD(double row, double column);
    TwoD(const TwoD&);
    
    void setRows();
    void setColumns();
    void printArray();
    void returnPosition();
    void createArray();
    TwoD& operator=(const TwoD& rightSide);

    friend TwoD operator+(const TwoD array1, const TwoD array2);
    
    ~TwoD();
    
private:
    double MAXROWS;
    double MAXCOLUMNS;
    double** myArray;
};

TwoD::~TwoD(){
    for(int i = 0; i < MAXROWS; i++){
        delete [] myArray[i];
    }
    delete [] myArray;
}

TwoD::TwoD(const TwoD& obj)
:MAXROWS(obj.MAXROWS), MAXCOLUMNS(obj.MAXCOLUMNS){
    myArray = new double*[MAXROWS];
    for(int i = 0; i < MAXROWS; i++){
        myArray[i] = new double[MAXCOLUMNS];
    }
    for(int i = 0; i < obj.MAXROWS; i++){
        for(int j = 0; j < obj.MAXCOLUMNS; j++){
            myArray[i][j] =  obj.myArray[i][j];
        }
    }
}

TwoD& TwoD::operator=(const TwoD& rightSide){
    if(MAXROWS == rightSide.MAXROWS && MAXCOLUMNS == rightSide.MAXCOLUMNS){
        int count = 0;
        for(int i = 0; i < MAXROWS; i++){
            for(int j = 0; j < MAXCOLUMNS; j++){
                if(myArray[i][j] != rightSide.myArray[i][j]){
                    break;
                }
                else{
                    count +=1 ;
                }
            }
        }
        if(count == MAXROWS*MAXCOLUMNS){
            return *this;
        }
    }
    MAXROWS = rightSide.MAXROWS;
    MAXCOLUMNS = rightSide.MAXCOLUMNS;
    
    for(int i = 0; i < MAXROWS; i++){
        for(int j = 0; j < MAXCOLUMNS; j++){
            myArray[i][j] = rightSide.myArray[i][j];
        }
    }
    return *this;
}

/*TwoD::~TwoD(){
    delete myArray;
}*/

TwoD operator+(const TwoD array1, const TwoD array2){
    TwoD addedArray(array1.MAXROWS, array1.MAXCOLUMNS);
    addedArray.myArray = new double*[array1.MAXROWS];
    
    for(int e = 0; e < array1.MAXROWS; e++){
        addedArray.myArray[e] = new double[array1.MAXCOLUMNS];
    }
    
    for(int i = 0; i < array1.MAXROWS; i++){
        for(int j = 0; j < array2.MAXCOLUMNS; j++){
            addedArray.myArray[i][j] = array1.myArray[i][j] + array2.myArray[i][j];
            }
        }
    return addedArray;
}

void TwoD::returnPosition(){
    cout << "What row position would you like to return?" << endl;
    int rowNum;
    cin >> rowNum;
    
    cout << "What column position would you like to return" << endl;
    int columnNum;
    cin >> columnNum;
    
    cout << "The number at position " << rowNum << "," << columnNum << " is: " << myArray[rowNum - 1][columnNum -1] << endl;
}

TwoD::TwoD()
:MAXROWS(5.0), MAXCOLUMNS(5.0){}

TwoD::TwoD(double row, double column)
:MAXROWS(row), MAXCOLUMNS(column){}

void TwoD::setRows(){
    cout << "How many rows would you like in your 2-D array?" << endl;
    cin >> MAXROWS;
}

void TwoD::setColumns(){
    cout << "How many columns would you like in your 2-D array?" << endl;
    cin >> MAXCOLUMNS;
}

void TwoD::createArray(){
    myArray = new double*[MAXROWS];
    
    for(int i = 0; i < MAXROWS; i++){
        myArray[i] = new double[MAXCOLUMNS];
    }
    
    for(int j = 0; j < MAXROWS; j++){
        for(int e = 0; e < MAXCOLUMNS; e++){
            cout << "Please enter a number for position: " << j + 1 << "," << e + 1 << endl;
            cin >> myArray[j][e];
        }
    }
    
}

void TwoD::printArray(){
    for(int i = 0; i < MAXROWS; i++){
        for(int j = 0; j < MAXCOLUMNS; j++){
            cout << myArray[i][j];
        }
        cout << endl;
    }
}

void TwoDMain(){
    // Example of creating an array:
    /*TwoD array1;
    array1.setRows();
    array1.setColumns();
    array1.createArray();
    array1.printArray();
    array1.returnPosition();*/
    
    //Example of adding two arrays:
    /*TwoD array2(2,2);
    array2.createArray();
    array2.printArray();
    TwoD array3(2,2);
    array3.createArray();
    array3.printArray();
    TwoD array4;
    array4 = array2 + array3;
    array4.printArray();*/
    
    //Example of setting one array equal to another:
    /*TwoD arrayOne(2,2);
    TwoD arrayTwo(2,2);
    arrayOne.createArray();
    arrayOne.printArray();
    arrayTwo.createArray();
    arrayTwo.printArray();
    arrayOne = arrayTwo;
    arrayOne.printArray();*/
    
    //Example of setting a NEWLY made object to an exisiting one:
    TwoD array1(2,2);
    array1.createArray();
    array1.printArray();
    
    TwoD array2 = array1;
    array2.printArray();
    
    
}





