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

void update(int *a,int *b)
{
    int temp = *a;
    *a = *a + *b;
    *b = abs(temp - *b);
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d \n%d \n", a, b);
    
    return 0;
}

