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
    int numQueries, query, queryType, value, temp;
    set<int> simpleSet;
    cin >> numQueries;
    for (int count = 0; count < numQueries; count++)
    {
        cin >> queryType >> value;
        switch (queryType)
        {
            case 1:
                simpleSet.insert(value);
                break;
            case 2:
                simpleSet.erase(value);
                break;
            case 3:
                cout << (simpleSet.find(value) == simpleSet.end() ? "No" : "Yes") << endl;
                break;
        }
    }
    
    return 0;
}