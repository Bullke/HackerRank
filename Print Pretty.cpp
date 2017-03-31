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
#include </Users/nenvy/Desktop/HackerRank/HackerRank/stdc++.h>

using namespace std;

int main()
{
    int T; cin >> T;
    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;
    while(T--)
    {
        double A; cin >> A;
        double B; cin >> B;
        double C; cin >> C;
        
        cout << setw(0) << showbase << hex << nouppercase << (unsigned long)A << endl;
        cout << right << setfill('_') << setw(15) << showpos << setprecision(2) << fixed << B << endl;
        cout << noshowpos << setprecision(9) << uppercase << scientific << C << endl;
    }
    
    return 0;
}