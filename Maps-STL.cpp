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
    int numQueries, queryType, studentMarks;
    string studentName;
    map<string, int> simpleMap;
    
    cin >> numQueries;
    for (int count = 0; count < numQueries; count++)
    {
        cin >> queryType >> studentName;
        switch (queryType)
        {
            case 1:
                cin >> studentMarks;
                simpleMap[studentName] += studentMarks;
                break;
            case 2:
                simpleMap.erase(studentName);
                break;
            case 3:
                cout << simpleMap[studentName] << endl;
                break;
        }
    }
    
    return 0;
}