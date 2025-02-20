//
//  point.cpp
//  bookCH6
//
//  Created by Ellie Townsend on 2/20/25.
//

#include "point.h"
#include <iostream>
using namespace std;

class Point{
public:
    void setData(int horizontal, int vertical);
    void moveData(int horizontal, int vertical);
    void rotateData();
    void getVerticalDataPoint();
    void getHorizontalDataPoint();
private:
    int xAxis;
    int yAxis;
    
};

void Point::setData(int horizontal, int vertical){
    xAxis = horizontal;
    yAxis = vertical;
}

void Point::moveData(int horizontal, int vertical){
    xAxis += horizontal;
    yAxis += vertical;
}

void Point::rotateData(){
    cout << "After a 90 degree clockwwise rotation, your new points are:";
    if(xAxis >= 0 && yAxis >= 0){
        yAxis = yAxis * -1;
    }
    else if(xAxis > 0 && yAxis < 0){
        yAxis *= -1;
        xAxis *= -1;
    }
    else if(xAxis < 0 && yAxis < 0){
        yAxis *= -1;
    }
    else if(xAxis < 0 && yAxis > 0){
        xAxis *= -1;
    }
    cout << "(" << xAxis << "," << yAxis << ")" << endl;
}

void Point::getVerticalDataPoint(){
    cout << "The current y-axis of your point is: " << yAxis << endl;
}

void Point::getHorizontalDataPoint(){
    cout << "The current x-axis of your point is: " << xAxis << endl;
}

void pointMain(){
    Point point;
    cout << "This program will allow you to move around a point you provide on a grid!" << endl;
    cout << "Please enter the vertical axis of your point" << endl;
    int verticalAxis;
    cin >> verticalAxis;
    cout << "Please enter the horizontal axis of your point" << endl;
    int horizontalAxis;
    cin >> horizontalAxis;
    point.setData(horizontalAxis, verticalAxis);
    
    point.rotateData();
    point.getVerticalDataPoint();
    point.getHorizontalDataPoint();
    
}


