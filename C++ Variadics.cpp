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

template <int n, bool...digits>
struct CheckValues
{
    static void check(int x, int y)
    {
        CheckValues<n-1, 0, digits...>::check(x, y);
        CheckValues<n-1, 1, digits...>::check(x, y);
    }
};

long long int pow(int number, int power)
{
    long long int answer = 1;
    for(int i = 0; i < power; i++)
    {
        answer = answer * number;
    }
    return answer;
}

template <bool ...digits>
int reversed_binary_value()
{
    const size_t size = sizeof...(digits);
    bool bits[size] = { digits... };

    int conversion = 0;
    
    for(int position = size-1; position >= 0; position--)
    {
        conversion = conversion + (pow(2,position) * bits[position]);
    }
    return (int)conversion;
};

template <bool...digits>
struct CheckValues<0, digits...>
{
    static void check(int x, int y)
    {
        int z = reversed_binary_value<digits...>();
        std::cout << (z+64*y==x);
    }
};

int main()
{
    int t; std::cin >> t;
    
    for (int i=0; i!=t; ++i) {
        int x, y;
        cin >> x >> y;
        CheckValues<6>::check(x, y);
        cout << "\n";
    }
    
    return 0;
}