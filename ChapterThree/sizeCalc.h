//
//  sizeCalc.hpp
//  bookCH3
//
//  Created by Ellie Townsend on 2/8/25.
//

#ifndef sizeCalc_h
#define sizeCalc_h

#include <stdio.h>

/* Write a program that asks for the user’s height, weight, and age, and then computes
 clothing sizes according to the following formulas.
 • Hat size = weight in pounds divided by height in inches and all that multiplied
 by 2.9.
 • Jacket size (chest in inches) = height times weight divided by 288 and then
 adjusted by adding one-eighth of an inch for each 10 years over age 30. (Note

 that the adjustment only takes place after a full 10 years. So, there is no adjust-
 ment for ages 30 through 39, but one-eighth of an inch is added for age 40.)

 • Waist in inches = weight divided by 5.7 and then adjusted by adding one-tenth
 of an inch for each 2 years over age 28. (Note that the adjustment only takes
 place after a full 2 years. So, there is no adjustment for age 29, but one-tenth
 of an inch is added for age 30.)
 Use functions for each calculation. Your program should allow the user to repeat
 this calculation as often as he or she wishes.*/

void prompts();

double jacketSize(double, double, int);
double waistSize(double, double);
double hatSize(double, double);

double additionalInchesWaist(double);
double additionalInchesChest(int);


#endif /* sizeCalc_hpp */
