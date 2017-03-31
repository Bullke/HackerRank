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
    int length, value;
    cin >> length;
    vector<int> sortVector;
    for(int position = 0; position < length; position++)
    {
        cin >> value;
        sortVector.push_back(value);
    }
    sort(sortVector.begin(), sortVector.end());
    
    for (std::vector<int>::iterator it=sortVector.begin(); it!=sortVector.end(); ++it)
    {
        std::cout << *it << " ";
    }
    
    return 0;
}