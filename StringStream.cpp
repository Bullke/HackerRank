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

using namespace std;

vector<int> parseInts(string str)
{
    vector<int> parsedInts;
    stringstream ss(str);
    int value;
    char comma;
    while (ss >> value)
    {
        parsedInts.push_back(value);
        ss >> comma;
    }
    
    return parsedInts;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }
    
    return 0;
}