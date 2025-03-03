//
//  overLoading.hpp
//  bookCH8
//
//  Created by Ellie Townsend on 3/3/25.
//

#ifndef overLoading_h
#define overLoading_h
#include <iostream>
using namespace std;


#include <stdio.h>
class Money;
istream& operator >>(istream& inputStream, Money& amount);
void moneyMain();;

#endif /* overLoading_hpp */
