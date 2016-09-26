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
#include <array>

using namespace std;



int main ()
{
    int arrayNum, searchNum;
    cin >> arrayNum >> searchNum;
    int** outerArray = new int* [arrayNum];
    for(int i = 0; i < arrayNum; i++)
    {
        int arraySize;
        cin >> arraySize;
        int* innerArray = new int [arraySize];
        for(int j = 0; j < arraySize; j++)
        {
            int num;
            cin >> num;
            innerArray[j] = num;
        }
        *(outerArray + i) = innerArray;
    }
    
    for(int i = 0; i < searchNum; i++)
    {
        int arrayIndex, location;
        cin >> arrayIndex >> location;
        cout << outerArray[arrayIndex][location] << endl;
    }
    return 0;
}

