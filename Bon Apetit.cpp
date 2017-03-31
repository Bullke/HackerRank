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
#include <list>
#include <cmath>
#include <ctime>
#include <queue>
#include <stack>
#include <bitset>
#include <limits>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <unordered_map>

using namespace std;

int main()
{
    int n, k, sum = 0, charge, input, excluded = 0;
    cin >> n >> k;
    
    for(int i = 0; i < n; i++)
    {
        cin >> input;
        if(i == k)
        {
            excluded = input;
        }
        else
        {
            sum += input;
        }
    }
    cin >> charge;
    ((sum / 2) == charge) ? cout << "Bon Appetit" : cout << (excluded / 2);
    
    return 0;
}