//
//  deviation.hpp
//  bookCH3
//
//  Created by Ellie Townsend on 2/8/25.
//

#ifndef deviation_h
#define deviation_h

#include <stdio.h>

/* Write a function that computes the average and standard deviation of four scores.
 The standard deviation is defined to be the square root of the average of the four
 values: (si − a )2, where a is the average of the four scores s1, s2, s3, and s

 The function will have six parameters and will call two other functions. Embed the function in a program that allows you to test the function again and again until you tell the program you are finished.*/



void promptsForDeviation();

void deviation(double a, double b, double c, double d);

double standardDeviation(double a, double b, double c, double d, double average);
double average(double a, double b, double c, double d);


#endif /* deviation_hpp */
