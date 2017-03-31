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
#include <numeric>
#include <string>
#include <functional>
#include <sstream>
#include <cassert>
#include <map>
#include <set>
#include <exception>
#include <stdexcept>
#include </Users/nenvy/Desktop/HackerRank/HackerRank/stdc++.h>

using namespace std;

int main()
{
    int length, value, queryLength, query;
    vector<int> LBVector;
    cin >> length;
    for(int position = 0; position < length; position++)
    {
        cin >> value;
        LBVector.push_back(value);
    }
    sort(LBVector.begin(), LBVector.end());
    vector<int>::iterator low;
    cin >> queryLength;
    for(int count = 0; count < queryLength; count++)
    {
        cin >> query;
        low = lower_bound (LBVector.begin(), LBVector.end(), query);
        if(LBVector[low-LBVector.begin()] == query)
        {
            cout << "Yes " << (low - LBVector.begin()+1) << endl;
        }
        else
        {
            cout << "No " << (low - LBVector.begin()+1) << endl;
        }
    }
    
    return 0;
}