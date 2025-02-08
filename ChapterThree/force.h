//
//  force.hpp
//  bookCH3
//
//  Created by Ellie Townsend on 2/8/25.
//

#ifndef force_h
#define force_h

#include <stdio.h>
/* The gravitational attractive force between two bodies with masses m1 and m2
 separated by a distance d is given by the following formula:

 F = Gm1m2
 d2
 where G is the universal gravitational constant:
 G = 6.673 * 10-8 cm3>(g • sec2)

 Write a function definition that takes arguments for the masses of two bodies
 and the distance between them and returns the gravitational force between them.

 Since you will use the previous formula, the gravitational force will be in dynes.
 One dyne equals a

 g • cm/sec2

 You should use a globally defined constant for the universal gravitational constant.

 Embed your function definition in a complete program that computes the gravita-
 tional force between two objects given suitable inputs. Your program should allow

 the user to repeat this calculation as often as the user wishes.*/

void force(double, double, double);

#endif /* force_hpp */
