//
//  wageIncrease.hpp
//  bookCH3
//
//  Created by Ellie Townsend on 2/7/25.
//

#ifndef wageIncrease_h
#define wageIncrease_h

#include <stdio.h>
/* Write a program to gauge the rate of an employee’s raise from the previous year.
 
 The program asks for their annual salary in this year and the previous year. It es-
 timates the hike percentage as the difference in their salary from the previous year

 divided by the previous year’s salary. Your program should allow the user to repeat
 this calculation as often as the user wishes. Define a function to compute the hike
 percentage for an employee. The hike rate should be a value of type double giving
 the rate as a percentage, for example 5.3 for 5.3%.
 
 Enhance your program from the previous exercise by having it also print out the
 estimated annual salary of the employee in one or two years from the time of the
 calculation. The increase in annual salary is estimated as the hike rate times the
 salary at the start of the year. Define a second function to determine the estimated
 salary of the employee after a specified number of years, given the current salary of
 the employee and the hike rate as arguments.*/
void increaseInWage();

#endif /* wageIncrease_hpp */
