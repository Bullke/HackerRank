//
//  HackerRank.cpp
//  HackerRank
//
//  Created by Nenvy on 9/15/16.
//  Copyright © 2016 Nenad Bulicic. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int numInt;
    long numLong;
    long long numLONG;
    char chaR;
    float numFloat;
    double numDouble;
    
    scanf("%d %ld %lld %c %f %lf", &numInt, &numLong, &numLONG, &chaR, &numFloat, &numDouble);
    
    printf("%d \n%ld \n%lld \n%c \n%f \n%lf", numInt, numLong, numLONG, chaR, numFloat, numDouble);
}