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
#include <iomanip>
#include <deque>
#include </Users/nenvy/Desktop/HackerRank/HackerRank/stdc++.h>

using namespace std;

class Triangle
{
public:
    void triangle()
    {
        cout<< "I am a triangle\n";
    }
    void description()
    {
        cout << "In an isosceles triangle two sides are equal" << endl;
    }
};
class Isosceles : public Triangle
{
public:
    void isosceles()
    {
        cout<< "I am an isosceles triangle\n";
    }
};

int main()
{
    Isosceles isc;
    isc.isosceles();
    isc.description();
    isc.triangle();
    return 0;
}