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
    int loops, input;
    cin >> loops;
    int array[loops];
    for(int i=0; i < loops; i++)
    {
        cin >> input;
        array[i] = input;
    }
    for(int j=loops-1; j >= 0; j--)
    {
        cout << array[j] << " ";
    }
    
    return 0;
}