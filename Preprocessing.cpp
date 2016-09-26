//
//  HackerRank.cpp
//  HackerRank
//
//  Created by Nenvy on 9/15/16.
//  Copyright © 2016 Nenad Bulicic. All rights reserved.
//

#define toStr(x) #x
#define io(v) cin >> v
#define foreach(v,i) for(int i=0; i<v.size(); i++)
#define FUNCTION(minMax,symb) void minMax(int& a,int b){if(b symb a)a=b;}
#define INF 1000000000


#include <cmath>
#include <cstdio>

#include <algorithm>

#include <vector>
#include <iostream>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
    int n; cin >> n;
    vector<int> v(n);
    foreach(v, i)
    {
        io(v)[i];
    }
    int mn = INF;
    int mx = -INF;
    foreach(v, i)
    {
        minimum(mn, v[i]);
        maximum(mx, v[i]);
    }
    int ans = mx - mn;
    cout << toStr(Result =) <<' '<< ans;
    return 0;
    
}

