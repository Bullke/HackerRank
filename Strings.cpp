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

int main()
{
    string a, b;
    int lengthA, lengthB;
    cin >> a >> b;
    lengthA = a.length();
    lengthB = b.length();
    cout << lengthA << " " << lengthB << endl;
    cout << a + b << endl;
    char temp = a.at(0);
    a.at(0) = b.at(0);
    b.at(0) = temp;
    cout << a << " " << b;
    return 0;
}