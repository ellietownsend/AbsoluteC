//
//  babylonianAlgorithm.hpp
//  bookCH1
//
//  Created by Ellie Townsend on 2/3/25.
//

#ifndef babylonianAlgorithm_hpp
#define babylonianAlgorithm_hpp

#include <stdio.h>
/* The Babylonian algorithm to compute the square root of a number n is as follows:
 
 Make a guess at the number (you can pick n/2 as your initial guess).
 Compute r = n / guess
 Set guess = (guess + r) / 2
 Go back to step 2 for as many iterations as necessary. The more that steps 2 and 3 are repeated, the closer guess will become to the square root of n.
 Write a program that inputs an integer for n, iterates through the Babylonian algorithm until guess is within 1% of the previous guess, and outputs the answer as a double.*/

void squareRoot();

#endif /* babylonianAlgorithm_hpp */
